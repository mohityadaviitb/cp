#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define pi 3.141592653589793238
#define pll pair<ll, ll>
#define pstr pair<string, string>

#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

using namespace std;


  vector<vector<pair<ll,ll> > > dp(2*100005,vector<pair<ll,ll> > (2*100005,make_pair(-1,-1)));




pair<ll,ll> help(ll i,ll j,vector<ll>& v){

    if(dp[i][j].first!=-1 && dp[i][j].second!=-1){
        return dp[i][j];
    }
 
    if(i==j-1 && v[i]==v[j]){
        dp[i][j]=make_pair(-2, -2);
        return dp[i][j];
    }
//    cout << i << " "<<j  <<endl;
    if(v[i]!=v[j]){
        dp[i][j]=make_pair(i, j);
           return dp[i][j];
    }
    else{
        pair<ll,ll> p = help(i+1,j,v);
        if(p.first!=-2 && p.second!=-2){
              dp[i][j]=p;
              
        }
        else{
              pair<ll,ll> p = help(i,j-1,v);
              dp[i][j]=p;
        
        }
    }

     return dp[i][j];

}












void solve()
{
    ll n;
    cin >> n;

    vector<ll> v;
    fu(i, 0, n)
    {
        int elm;
        cin >> elm;
        v.pb(elm);
    }




    ll q;
    cin >> q;


    vector<pair<ll,ll> > qr;

    for(ll i=0;i<q;i++){
        ll l=0,r=0;
        cin >> l>>r;
        pair<ll,ll> p=make_pair(l-1,r-1);

        qr.push_back(p);
    }


    pair<ll,ll> p = make_pair(-1,-1);

  



for(int i=0;i<q;i++){
    
    pair<ll,ll> p =  help(qr[i].first,qr[i].second,v);
if(p.first!=-1 || p.second!=-2){
 cout << p.first+1<<" "<<p.second+1<<endl;
}
else{
  cout << p.first<<" "<<p.second<<endl;
}
  
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
