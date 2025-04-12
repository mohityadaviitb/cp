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

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
    

    sort(v.begin(),v.end());

    ll i=n-1;
    ll len=1;
    ll ans=0;

    while(i>=0){
        if(v[i]*len>=x){
            // cout<<i<<endl;
            // cout<<v[i]<< ' '<<len <<" "<<endl;;
                ans++;
                i-=len;
        }
        else{
            i--;
            len++;
        }
    }
    // cout<<"RAM"<<endl;
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
