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
    ll n,x;
    cin >> n>>x;

    ll sum=0;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        sum+=elm;
    }
    if(x*n==sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
