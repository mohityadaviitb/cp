#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (int i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif



int  helper(vector<vector<int > > &dp, vector<int > &v, int  i, int  s){
    int  n=v.size();
    if(s<0){
        return INT_MIN;
    }
    if(i==n){
        dp[i][s]=0;
        return dp[i][s];
    }
    if(dp[i][s]!=-1){
        return dp[i][s];
    }
    
    if(v[i]>=0){
       
          return  dp[i][s]= 1+helper(dp,v,i+1,s+v[i]);
    }

    return  dp[i][s]= max(helper(dp,v,i+1,s),1+helper(dp,v,i+1,s+v[i]));

}

void solve()
{
    int  n;
    cin >> n;

    vector<int > v;
    int  sum=0;
    fu(i, 0, n)
    {
        int  elm;
        cin >> elm;
        v.pb(elm);
        if(elm>0){
            sum+=elm;
        }
    }
    vector<vector<int > > dp(n+5,vector<int >(100000,-1));

    cout<<helper(dp,v,0,0)<<endl;
    
}

int main()
{
    Code By Mohityadav
        int  t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}