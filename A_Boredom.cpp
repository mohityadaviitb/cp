// #include <bits/stdc++.h>
// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define Mohityadav cout.tie(NULL);
// #define fu(i, a, b) for (ll i(a); i < b; i++)
// #define ll long long int
// #define pb push_back
// using namespace std;
// #define commented // Un-Comment this before submission
// #ifndef commented
// #define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
// #else
// #define dbg(v)
// #endif

// void solve()
// {
//     ll n;
//     cin >> n;
//     map<ll,ll> mp;
//     map<ll,ll> f;
//     ll mx=INT_MIN;


//     // for(ll i=0;i<100000;i++){
//     //     mp[i]=0;
//     // }

//     vector<ll> v;
//     fu(i, 0, n)
//     {
//         ll elm;
//         cin >> elm;
//         mp[elm]++;
//         v.pb(elm);
//         mx=max(elm,mx);
//     }

    
//     vector<pair<ll,ll> > ans;

//     for(auto i : mp)
//     {

//         // cout<< i.first+1  <<endl;
//         // cout<<  (mp[i.first+1])  <<endl;
  
//         if (mp.count(i.first - 1)) {
//             f[i.first] += (mp[i.first - 1]) * (i.first - 1);
//         }
//         if (mp.count(i.first + 1)) {
//             f[i.first] += (mp[i.first + 1]) * (i.first + 1);
//         }
       
//         ans.pb(make_pair(f[i.first],i.first));
//     }


  


//     sort(ans.begin(),ans.end());


// for(ll i=0;i<ans.size();i++){
//     cout<<ans[i].first<<" "<<ans[i].second<<endl;
// }

// cout<<endl;

// vector<ll> visited(ans.size(),0);
// ll answer=0;

// for(ll i=ans.size()-1;i>=0;i--){
//     if(visited[i]!=0){
//         continue;
//     }
//     else{
//         if (mp.count(ans[i].second - 1)) {
//            visited[ans[i].second - 1]=1;
//         }
//         if (mp.count(ans[i].second + 1)) {
//             visited[ans[i].second + 1]=1;
//          }
//          answer+=ans[i].second;
//     }
// }

// cout<<answer<<endl;

    
// }

// int main()
// {
//     Code By Mohityadav
//         ll t=1;
//         // cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }









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


ll help( vector<ll> &dp, ll i,vector<ll> &f){
    if(dp[i]!=-1){
        return dp[i];
    }

    if(i==0){
        return dp[i]=0;
    }
    if(i==1){
        return dp[1]=f[1];
    }

    return dp[i] = max(help(dp,i-1,f),help(dp,i-2,f)+i*f[i]);
}





void solve()
{
    ll n;
    cin >> n;
    map<ll,ll> mp;

    ll mx=INT_MIN;


 

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        mp[elm]++;
        v.pb(elm);
        mx=max(mx,elm);
    }

    vector<ll> dp(mx+5,-1);
    vector<ll> f(mx+5,0);

    for(ll i=0;i<mx+5;i++){
        f[i]=mp[i];
    }

//     for(ll i=1;i<=mx;i++){
//         cout<<f[i]<<" ";
//     }
// cout<<endl;

cout<<help(dp,mx+1,f)<<endl;








    
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
