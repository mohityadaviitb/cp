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
//     ll n,k;
//     cin >> n>>k;

//   string s;


//       vector<ll> w;
//     ll t=0;
//       for(ll i=n-1;i>=0;i--){
//         if(s[i]=='1'){
//             t+=1;
//         }
//         else{
//             t-=1;
//         }
//             w.push_back(t);
//       }

// sort(w.begin(),w.end());

// for(int i=0;i<n;i++){
//     cout << w[i]<<" ";
// }
// cout << endl;

// }

// int main()
// {
//     Code By Mohityadav
//         ll t;
//         cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<int> results;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        vector<int> suffix_sums;
        int s_sum = 0;
        
        for (int p = n - 1; p >= 0; --p) {
            suffix_sums.push_back(s_sum);
            if (s[p] == '1') {
                s_sum += 1;
            } else {
                s_sum -= 1;
            }
        }
        
        sort(suffix_sums.rbegin(), suffix_sums.rend());
        
        int prefix_sum = 0;
        int answer = -1;#include <bits/stdc++.h>
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
    ll n;
    cin >> n;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
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

        
        for (int m = 2; m <= n; ++m) {
              prefix_sum += suffix_sums[m - 2];
                if (prefix_sum >= k) {
                    answer = m;
                    break;
                }
            
        }
        
        results.push_back(answer);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}