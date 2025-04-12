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
    ll n,k;
    cin >> n>>k;
    // k++;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    vector<ll> w(n,0);

    for(ll i=0;i<n-1;i++){
        if(v[i]<2*v[i+1]){
            w[i]=1;
        }
    }
    ll l=n-1;
    ll r=n-1;
    ll ans=0;

for(ll i=0;i<n-1;i++){
    // cout << w[i]<<' ';
}
    // cout << endl;

    for(ll i=n-2;i>=0;i--){



        if(w[i]==1){
            l=i;
        }
        else{
            l=i;
            r=i;
        }
                if(r-l>=k){
            ans++; 
            // cout << l << " "<< r <<endl;
        }
    }


cout << ans<<endl;


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
