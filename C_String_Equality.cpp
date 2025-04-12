#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

void solve()
{
    ll n, k;
    cin >> n >> k;

    string c, d;

    cin >> c >> d;
    map<char, int> ma;
    map<char, int> mb;

    vector<char> a(n, '*');
    vector<char> b(n, '*');

    for (ll i = 0; i < n; i++)
    {
        a[i] = c[i];

        b[i] = d[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (ll i = 0; i < n; i++)
    {

        ma[a[i]]++;

        mb[b[i]]++;
    }

    for(auto i : mb){
        if(a[i.first]==i.second){
            continue;
        }
        else{
            ll t = abs(a[i.first]-i.second);
            if(t%k!=0){
                       cout << "No"<<endl;
                return;
            }
        }
    }


 cout << "Yes"<<endl;



    //  for(ll i=0;i<n;i++){
    //     if(a[i]==b[i]){

    //         continue;
    //     }
    //     else if(a[i]>b[i]){
    //                  cout << "No"<<endl;
    //             return;
    //     }
    //     else{
    //         ll t=i;
    //         while(a[i]==a[t]){
    //             t++;
    //         }

    //         ll l = t-i+1;
    //         l-=l%k;
    //         i+=l-1;
    //         // if(a[i+1]!=b[i+1]){
    //         //     cout << "No"<<i<<" " <<endl;
    //         //     return;
    //         // }

    //     }
    //  }

    //    cout << "Yes"<<endl;
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
