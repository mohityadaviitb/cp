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
    // map<ll,ll> mp;
    vector<ll> mp(8005,0);
    ll sum=0;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        mp[elm]+=1;
    }

    vector<ll> presum(n+1,0);

    for(ll i=0;i<n;i++){
        sum+=v[i];
        presum[i+1]=sum;
    }

    ll ans=0;

    for(ll i=0;i<=n-2;i++){
        for(ll j=i+2;j<=n;j++){
            // cout<< i<<" "<<j <<endl;
            ll cs = presum[j]-presum[i];
            if(cs <=n ){
                if(mp[cs]!=0){
                       // cout<<cs<<endl;
                ans+=mp[cs];
                mp[cs]=0;
                }
             
               
            }
        }
    }
    cout<<ans<<endl;
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
