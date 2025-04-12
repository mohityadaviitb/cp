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


ll f(vector<ll> v,vector<ll> w, ll p,ll i, vector<vector<ll> >& dp){
    ll n = v.size();
    if(i>=n){
        return 0;
    }

    if(dp[i][p]!=-1){
        return dp[i][p];
    }



 dbg(i)
 dbg(p)
    if(p==1){
           ll a=v[i]+f(v,w,0,i+1,dp);
           ll b=f(v,w,1,i+1,dp);
           dbg(a)
           dbg(b)
           dp[i][p]=max(a,b);
        return max(a,b);

    }
    else{
          ll a=w[i]+f(v,w,1,i+1,dp);
           ll b=f(v,w,0,i+1,dp);
              dbg(a)
           dbg(b)
             dp[i][p]=max(a,b);
        return max(a,b);
    }
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
        v.pb(elm);
    }
     vector<ll> w;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        w.pb(elm);
    }

        vector<vector<ll> > dp(n,vector<ll> (2,-1));


        ll t =w[0]+f(v,w,1,1,dp);
    ll r=v[0]+f(v,w,0,1,dp);

    dbg(r)
    dbg(t)


    ll ans=max(r,t);
          cout << ans <<endl;
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