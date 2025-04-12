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
    ll n;
    cin >> n;
    vector<ll> v;
      vector<ll> w;
    map<ll,ll> mp;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        mp[elm]++;
        v.pb(elm);
    }
          for(auto i : mp){
            w.push_back(i.second);
          }
          sort(w.begin(),w.end());

      for(ll i=0;i<w.size();i++){
              
                //   cout << w[i]<<" ";
             }


// cout << endl;
ll m=w.size();
          ll t=w[m-1];
          ll ans=0;
          for(ll i=m-2;i>=0;i--){
               if(w[i]>t-1){
                w[i]=t-1;
                t--;
                     }
            else{
               t=w[i];
            
            }
          
         
          }

             for(ll i=0;i<w.size();i++){
                if(w[i]>0){
                        ans+=w[i];
                }
              
                //   cout << w[i]<<" ";
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