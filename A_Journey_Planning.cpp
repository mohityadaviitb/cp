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
// #define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
// #else
// #define dbg(v)
// #endif

// ll f(const vector<ll>& v, ll idx, vector<ll>& dp) {
//     if (dp[idx] != -1) {
//         return dp[idx];
//     }
//     ll n = v.size() - 1; 

//     ll count = 0;

//     for (ll i = idx+1; i <= n; i++) { // Start from idx * 2 to skip self
//         if (v[i] - v[idx]==i-idx) {
//             // cout << v[i] <<" "<<v[idx]<<endl;
//             count =  v[i] + f(v, i, dp);
//                 dp[idx] = count;
//     return count;
//         }
//     }
//     return 0;

// }

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n + 1, 0); // 1-indexed array
//     vector<ll> dp(n + 1, -1); // Memoization table
//     fu(i, 1, n + 1) {
//         cin >> v[i];
//     }

//     ll mx = v[0]; 
//     for (ll i = 1; i <= n; i++) {
//         mx = max(mx, v[i] + f(v, i, dp));
//         // cout << mx <<endl;
//     }
//     cout << mx << endl;
// }

// int main() {
//     Code By Mohityadav
//     ll t=1;
//     while (t--) {
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
#define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
#else
#define dbg(v)
#endif
                                                                                             
                                                                                             
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll> > v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(make_pair(elm-i-1,i+1));
    }
 v.pb(make_pair(INT_MAX,-1));

    sort(v.begin(),v.end());


    for(ll i=0;i<n;i++){
        // cout << v[i].first+v[i].second<<" ";
    }
    // cout << endl;
    
   ll sum=0;
   ll ans=v[0].first+v[0].second;

    for(ll i=0;i<n;i++){
      sum+=v[i].first+v[i].second;
        if(v[i].first==v[i+1].first){
           
           

        }
        else{
             ans=max(ans,sum);
            sum=0;
        }
    }
    cout <<ans<<endl;
          
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