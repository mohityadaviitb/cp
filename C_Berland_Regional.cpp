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



bool mygreater(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.first != b.first)
        return a.first > b.first; // Sort by the first element in descending order
    return a.second > b.second;  // Tiebreaker: sort by the second element in descending order
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm-1);
    }
     vector<ll> w;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        w.pb(elm);
    }


      vector<pair<ll,ll> > s;

      for(ll i=0;i<n;i++){
        s.push_back(make_pair(w[i],v[i]));
      }

    sort(s.begin(),s.end(), mygreater);


for(ll i=0;i<n;i++){
        // cout << s[i].first<<" "<<s[i].second<<" ";
    
   
}
 // cout << endl;

     vector<ll> vsize(n,0);

    vector<vector<ll> > ans(n,vector<ll>(0,0));

    for(ll i=0;i<n;i++){
        ans[s[i].second].push_back(s[i].first);
        vsize[s[i].second]++;
       
    }
// +ans[s[i].second][vsize[s[i].second]]
for(ll i=0;i<n;i++){
    for(ll j=1;j<vsize[i];j++){
        ans[i][j] += ans[i][j-1];
        // cout << ans[i][j] << " ";
    }
    // cout << endl;
}
// cout <<endl;

vector<ll>mk(n,0);
 
//  cout << "ram" <<ans[0][4]<<endl;


    for(ll i=0;i<n;i++){
 for(ll k=1;k<=vsize[i];k++){
        ll t = ans[i][(vsize[i]-(vsize[i])%k)-1];
        // cout << t <<i <<k<<(vsize[i]-(vsize[i])%k)<< endl;
        mk[k-1] +=t;
 }
}


for(ll i=0;i<n;i++){
    cout << mk[i] << " ";
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
