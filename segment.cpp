#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;

const int mxN = 1e6;

struct node {
    ll sum, prefixsum, suffixsum, maxsum;
};

node tree[mxN];

void build(ll arr[], ll low, ll high, ll index)
{
    if (low == high) {
        tree[index].sum = arr[low];
        tree[index].prefixsum = arr[low];
        tree[index].suffixsum = arr[low];
        tree[index].maxsum = arr[low];
    }
    else {
        ll mid = (low + high) / 2;

        build(arr, low, mid, 2 * index + 1);

        build(arr, mid + 1, high, 2 * index + 2);

        tree[index].sum = tree[2 * index + 1].sum
                          + tree[2 * index + 2].sum;

        tree[index].prefixsum
            = max(tree[2 * index + 1].prefixsum,
                  tree[2 * index + 1].sum
                      + tree[2 * index + 2].prefixsum);

       
        tree[index].suffixsum
            = max(tree[2 * index + 2].suffixsum,
                  tree[2 * index + 2].sum
                      + tree[2 * index + 1].suffixsum);

 
        tree[index].maxsum
            = max(tree[index].prefixsum,
                  max(tree[index].suffixsum,
                      max(tree[2 * index + 1].maxsum,
                          max(tree[2 * index + 2].maxsum,
                              tree[2 * index + 1].suffixsum
                                  + tree[2 * index + 2]
                                        .prefixsum))));
    }
}

void update(ll arr[], ll index, ll low, ll high,
            ll idx, ll value)
{

    if (low == high) {
        tree[index].sum = value;
        tree[index].prefixsum = value;
        tree[index].suffixsum = value;
        tree[index].maxsum = value;
    }
    else {

        ll mid = (low + high) / 2;

        if (idx <= mid)
            update(arr, 2 * index + 1, low, mid, idx,
                   value);

        else
            update(arr, 2 * index + 2, mid + 1, high, idx,
                   value);

        tree[index].sum = tree[2 * index + 1].sum
                          + tree[2 * index + 2].sum;

     
        tree[index].prefixsum
            = max(tree[2 * index + 1].prefixsum,
                  tree[2 * index + 1].sum
                      + tree[2 * index + 2].prefixsum);

   
        tree[index].suffixsum
            = max(tree[2 * index + 2].suffixsum,
                  tree[2 * index + 2].sum
                      + tree[2 * index + 1].suffixsum);


        tree[index].maxsum
            = max(tree[index].prefixsum,
                  max(tree[index].suffixsum,
                      max(tree[2 * index + 1].maxsum,
                          max(tree[2 * index + 2].maxsum,
                              tree[2 * index + 1].suffixsum
                                  + tree[2 * index + 2]
                                        .prefixsum))));
    }
}

node query(ll arr[], ll index, ll low, ll high, ll l,
           ll r)
{
    node result;
    result.sum = result.prefixsum = result.suffixsum
        = result.maxsum = INT_MIN;

    if (r < low || high < l)
        return result;

    if (l <= low && high <= r)
        return tree[index];

    ll mid = (low + high) / 2;

    if (l > mid)
        return query(arr, 2 * index + 2, mid + 1, high, l,
                     r);

    if (r <= mid)
        return query(arr, 2 * index + 1, low, mid, l, r);

    node left = query(arr, 2 * index + 1, low, mid, l, r);
    node right
        = query(arr, 2 * index + 2, mid + 1, high, l, r);

    result.sum = left.sum + right.sum;
    result.prefixsum
        = max(left.prefixsum, left.sum + right.prefixsum);

    result.suffixsum
        = max(right.suffixsum, right.sum + left.suffixsum);
    result.maxsum = max(
        result.prefixsum,
        max(result.suffixsum,
            max(left.maxsum,
                max(right.maxsum,
                    left.suffixsum + right.prefixsum))));

    return result;
}


int main()
{
        Code By Mohityadav
      int t;
        cin >> t;
    while (t--)
    {
       
 ll n;
    cin >> n;

   ll a[n];
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        a[i] = elm;

        
    }


    build(a, 0, n - 1, 0);




ll q=0;
cin >> q;

while(q--){
    ll x,l,r;
    cin >> x>>l>>r;
    if(x==1){
        a[l-1]=r;
          update(a, 0, 0, n - 1, l - 1, r);
    }
    else{
        ll mm=query(a, 0, 0, n - 1, l - 1, r - 1).maxsum;
        if(mm<0){
            cout <<0<<endl;
        }
        else{
  cout << mm<<endl;
        }
      
    }
}



    }
   




    return 0;
}