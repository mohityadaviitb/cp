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
    ll n=0,m=0;
    cin >> n>>m;

  string s="",t="";

  cin >>s>>t;
  map<char,vector<ll> > mp;

  for(ll i=0;i<n;i++){
    mp[s[i]].push_back(i);
  }





  vector<ll>mn (m,INT_MAX);
  vector<ll>mx (m,INT_MIN);

// mn[0]=mp[t[0]][0];
// mx[m-1]=mp[t[m-1]][mp[t[m-1]].size()-1];

int abhi=-1;


//for minimum sequence
for(int i=0;i<m;i++){
    int x=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),abhi)-mp[t[i]].begin();
    int prevmin=mp[t[i]][x];
    mn[i]=prevmin;
    abhi=prevmin;
}


  for(auto &x : mp){
    for(auto &y : x.second){
        y=-y;
    }
    sort(x.second.begin(),x.second.end());
  }


  abhi=-n-1;
  //for maximum
  for(int i=m-1;i>=0;i--){
      int x=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),abhi)-mp[t[i]].begin();
      int prevmin=mp[t[i]][x];
      mx[i]=-prevmin;
      abhi=prevmin;
  }



  ll ans=INT_MIN;

  for(ll i=1;i<m;i++){
    ans=max(ans,mx[i]-mn[i-1]);
  }

  cout<<ans<<endl;

    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
