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
    vector<pair<ll,ll> > v;
     vector<ll> w;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(make_pair(elm,i));
    }

    sort(v.begin(),v.end());

       w.pb(v[0].first);

    for(ll i=1;i<n;i++){
        w.pb(v[i].first+w[i-1]);
        // cout << w[i]<<" ";
    }
    // cout <<endl;

ll ans=n-1;

    for(ll i=n-1;i>=1;i--){
        if(v[i].first<=w[i-1]){
            ans=i-1;
        }
        else{
            break;
        }
    }


    // cout <<ans<<endl;

    vector<ll> m;

    for(ll i=ans;i<n;i++){
      m.push_back(v[i].second);
    }
    // if(v[0].first==v[1].first){
    //     m.push_back(v[0].second);
    // }
    sort(m.begin(),m.end());
 cout << m.size()<< endl;
    for(ll i=0;i<m.size();i++){
            cout << m[i]+1<< " ";

    }
    cout << endl;

          
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