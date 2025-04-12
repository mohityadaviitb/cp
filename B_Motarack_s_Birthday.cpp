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

    ll mn=INT_MAX;
    ll mx=INT_MIN;

   for(ll i=0;i<n-1;i++){
    if(v[i]==-1){
        if(v[i+1]!=-1){
            mn=min(mn,v[i+1]);
        }
        if(v[i+1]!=-1){
             mx=max(mx,v[i+1]);
        }
    
    }
    else if(v[i+1]==-1){
        if(v[i]!=-1){
            mn=min(mn,v[i]);
        }
        if(v[i]!=-1){
             mx=max(mx,v[i]);
        }
    }



   }

    
   ll k=(mx+mn)/2;
   ll m=INT_MIN;

    for(ll i=0;i<n;i++){
        if(v[i]!=-1){
            m=max(m,v[i]-k);
       }

    }

    cout<<m <<" "<<k<<endl;
    
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
