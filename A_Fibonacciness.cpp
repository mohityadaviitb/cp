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
   
    vector<ll> a;
    fu(i, 0, 5)
    {
        if(i==2){
               a.pb(0);
               continue;
        }
        ll elm;
        cin >> elm;
        a.pb(elm);

        
    }
    ll m=0;
    ll ans=INT_MIN;

a[2]=a[0]+a[1];

    for(ll i=0;i<=2;i++){
        if(a[i]+a[i+1]==a[i+2]){
            m++;
        }
    }

    ans=max(ans,m);
        m=0;
    // cout<<ans<<endl;


a[2]=a[3]-a[1];
// cout <<a[2]<<"t"<<a[3]<<" " <<a[4];

    for(ll i=0;i<=2;i++){
        if(a[i]+a[i+1]==a[i+2]){
            // cout << i<<endl;
            m++;
        }
    }

    ans=max(ans,m);
    m=0;
    // cout<<ans<<endl;


    a[2]=a[4]-a[3];

    for(ll i=0;i<=2;i++){
        if(a[i]+a[i+1]==a[i+2]){
            m++;
        }
    }

    ans=max(ans,m);
    m=0;

cout<<ans<<endl;
// cout <<endl;

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
