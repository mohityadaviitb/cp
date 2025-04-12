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
    ll n,m;
    cin >> n>>m;

    vector<ll> x;
     vector<ll> y;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        x.pb(elm);
         ll elm2;
        cin >> elm2;
        y.pb(elm2);
        
    }

    ll ans=4*n*m;

    for(ll i=1;i<n;i++){
        ll t=(x[i-1]+m)-x[i]-x[i-1];
        ans-=2*t;
           ll t2=(y[i-1]+m)-y[i]-y[i-1];
        ans-=2*t2;
    }
cout <<ans<<endl;


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
