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
ll gans=0;
// ll m=0;
// ll n=0;
ll mk=INT_MAX;
vector<ll> dp (200005,0);

ll rec(ll n,ll m,ll ans){

dp[n]=1;

if(n>m){
    return n-m;
}
    gans++;
    if(gans>9000000000 || ans>mk){
        // cout << mk<<" "<<ans<<"r"<<endl;
        return 1000000;
    }

    cout << n <<" "<< m << " "<<ans<< " " <<mk<<  endl;

    

  

    if(n==m){
        mk=ans;
        return 0;
    }
    ll a=  1000000;;
    ll b =  1000000;;
if(n<m && dp[n*2]!=1){
       a = rec(n*2,m,1+ans);
    //    mk=min(a+ans,mk);
}
              
    
   if(n>0  && dp[n-1]!=1){
          b = rec(n-1,m,1+ans);
        //   mk=min(b+ans,mk);
   }
   

    ans=1+min(a,b);
    // mk=min(mk,ans);
    return 1+ min(a,b);
}
                                                                                             
                                                                                             
void solve()  
{
    ll n,m;
    cin >> n>>m;

    ll ans= rec(n,m,0);
   
cout << ans<<endl;
          
}
                                                                                             
                                                                                             
                                                                                             
                                                                                             
int main()
{
    Code By Mohityadav
        ll t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}