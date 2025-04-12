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
    vector<pair<ll,pair<ll,ll> > > v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(make_pair(elm,make_pair(i,-1)));
    }

    sort(v.begin(),v.end());
      v.pb(make_pair(-1,make_pair(-1,-1)));

    ll i=0;
    ll t=1;

    while(i<=n-1){
        if(v[i].first==v[i+1].first){
            if(t<=k){
              (v[i].second).second=t++;
            }
            else{
                 (v[i].second).second=0;
            }
          
        }
        else{
              if(t<=k){
              (v[i].second).second=t++;
              t=1;
            }
            else{
                 (v[i].second).second=0;
                 t=1;
            }
        }
        i++;
    }

    vector<pair<ll,ll> > ans;

 for(ll i=0;i<n;i++){
    ans.push_back(make_pair(v[i].second.first,v[i].second.second));


 }
 sort(ans.begin(),ans.end());
    for(ll i=0;i<n;i++){
        cout <<  ans[i].second<<" ";
    }

cout <<endl;
          
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