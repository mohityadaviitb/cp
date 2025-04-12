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
    ll n;
    cin >> n;

    vector<vector<ll> > v(2,vector<ll>(n,0));
    for(int i=0;i<2;i++){
        fu(j, 0, n)
    {
        ll elm;
        cin >> elm;
       v[i][j]=elm;
    }
    }

    ll mx=INT_MIN;
    ll idx=-1;
    for(ll i=0;i<n;i++){
        if(v[0][i]+v[1][i]>mx){
            mx=v[0][i]+v[1][i];
            idx=i;
        }
    }
    ll ans=mx;

    for(ll i=0;i<n;i++){
        if(i==idx){
            continue;
        }
        else{
            ans+=max(v[0][i],v[1][i]);
        }
    }

    cout << ans<<endl;
   
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
