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

    vector<ll> v;
    fu(i, 0, n)
    {
     
        v.pb(i+1);
    }

    vector<pair<ll,ll> > u;

    for(ll i=0;i<m;i++){
        ll a,b;
        cin >> a >>b;
        u.push_back(make_pair(a,b));
    }

    for(ll i=0;i<n;i++){
        if
    }



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
