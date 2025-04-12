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
    set<ll>s;
    s.insert(0);
    ll sum=0;
    ll ans=0;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
    
    for(ll i=0;i<n;i++){
        sum+=v[i];
        if(s.find(sum)!=s.end()){

            s.clear();
            ans++;
            // cout<<i<<endl;
            sum=v[i];
            s.insert(sum);
            s.insert(0);
        }
        else{
            s.insert(sum);
        }
    }

    cout<<ans<<endl;

}

int main()
{
    Code By Mohityadav
        ll t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
