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

    vector<ll> a;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        a.pb(elm);
    }

     vector<ll> b;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        b.pb(elm);
    }

    vector<ll> c;
    fu(i, 0, n)
    {
      
        b.pb(a[i]-b[i]);
    }

    sort(a.begin(),a.end());

    //ai+aj>0

    for(ll i=0;i<n;i++){
        ll x = a[i];

        
    }

}

int main()
{
    Code By Mohityadav
        ll t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
