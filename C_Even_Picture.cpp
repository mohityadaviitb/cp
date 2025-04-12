#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define AyushJadia cout.tie(NULL);
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

    ll i=0;
    ll j=0;

    cout<<3*n+4<<endl;

    // cout<<0<< " "<<0<<endl;
ll t=0;
for(ll i=0;i<=n+1;i++){
    for(ll j=max(t,i-1);j<=min(i+1,n+1);j++){
            cout<<i<<" "<<j<<endl;
    }
}
    
}

int main()
{
    Code By AyushJadia
        ll t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
