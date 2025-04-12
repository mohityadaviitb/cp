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
#define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
#else
#define dbg(v)
#endif
                                                                                             
                                                                                             
void solve()
{
    ll n,k;
    cin >> n>>k;
    vector<ll> v;
    ll mx=0;
    ll t =0;
      map<ll,ll> mp;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;

        ll m=elm%k;
        if(m!=0){
               v.pb(m);
                 mp[elm%k]++;
        }
     
      
    }
        
      for(auto i : mp){
      if(mx<i.second){
        mx=i.second;
        t=i.first;
      }
      }

if(mx==0){
    cout << 0<<endl;
    return; 
}

ll ans=0;

ans=k*(mx-1);

ans+=(k-t)+1;

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