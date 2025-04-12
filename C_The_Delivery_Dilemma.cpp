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

    vector<pair<ll,ll> > v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(make_pair(elm,0));

    }
    
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
       v[i].second=elm;

    }
    ll ans=0;

    sort(v.begin(),v.end());

    for(ll i=n-1;i>=0;i--)
    {
        ll a= v[i].first;
        ll b=v[i].second;
        if(b>a){
            cout << max(a,ans)<<endl;
            return;
        }
        else{
            ans+=b;
            if(ans>=a){
                cout <<max(a,ans-b)<<endl;
                return;
            }
        }

    }
cout<<ans<<endl;
  
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
