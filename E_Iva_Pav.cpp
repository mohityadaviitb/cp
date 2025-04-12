#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
// #define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

bool f(vector<vector<ll> > &b, ll l, ll k, ll mid)
{
    ll ans = 0;
//   cout << l << " hhhhh "<<mid<<endl;


    if(l==0){
         for (ll j = 0; j < 32; j++)
    {
      
    //    cout <<" t " <<b[mid][j]<<endl;
        if (b[mid][j] == (mid - l+1) && b[mid][j] !=0)
        {
            ans = ((1 << j) | ans);
        }
    }
    }


else{
  for (ll j = 0; j < 32; j++)
    {
      
    //    cout << b[l-1][j] <<" t " <<b[mid][j]<<endl;
        if (b[mid][j] - b[l-1][j] == (mid - l+1) && b[mid][j] !=0)
        {
            ans = ((1 << j) | ans);
        }
    }
}

  
// cout << ans << " ans " <<k<<endl;
    if (ans >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ll binarys(vector<vector<ll> > &b, ll l, ll k, ll n)
{

    ll left = l;
    ll right = n - 1;
    ll ans = -1;

    while (left <= right)
    {
        ll mid = (left + right) / 2;

        // cout << " " << mid <<"  m  "<<endl;

        if (f(b, l, k, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    ll q;
    cin >> q;
    vector<vector<ll> > b(n, vector<ll>(32, 0));


 for (ll j = 0; j < 32; j++)
        {
            b[0][j] = int((v[0] & (1 << (j))) >> (j));
        }



    for (ll i =1; i < n; i++)
    {
        for (ll j = 0; j < 32; j++)
        {
            b[i][j] = b[i-1][j] + int((v[i] & (1 << (j))) >> (j));
        }
    }

    for (ll i = 0; i < q; i++)
    {   ll l, k;
        cin >> l >> k;

        ll ans = binarys(b, l-1, k, n);

if(ans==-1){
     cout << -1 <<" ";
}
else{
 cout << ans+1 <<" ";
}
       
    }
    cout << endl;
}

int main()
{
    Code By Mohityadav
        ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
