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

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    ll ans=0;

    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++){
        ll t = v[i];

        ll idx=upper_bound(v.begin(),v.end(),t+2)-v.begin();

        // cout<<idx<<" ";

        if(idx>=n){
           idx=n-1;
        }



        else if(v[idx]>t+2){
            idx--;
        }

        ll d=idx-i;
        cout<<i << " " <<idx<<" " << d <<endl;
        if(d>0){
            ans+=d*(d-1)/2;
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
