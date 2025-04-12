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
                                                                                             
                                                                                             
void solve() {
    int n; cin>>n;
    vector<pair<ll,ll> > v(n);
    vector<ll> fix;
        vector<ll> fixed;

          map<ll,ll> mp; 

    for(auto& i : v) {
        cin>>i.first>>i.second;
        if(i.first ==i.second) {
            fix.pb(i.first);
            mp[i.first]++;
        }
    }
    
  sort(fix.begin(),fix.end());


  ll t=fix.size();
  fix.pb(-1);




  for(ll i=0;i<t;i++){
    if(fix[i]!=fix[i+1]){
        fixed.pb(fix[i]);
    }
  }


    // if(fix[t-1]!=fix[t-2]){
    //     fixed.pb(fix[t-1]);
    // }

    // cout<<fixed.size()<<endl;

    string ans(n, '0');



    for(int i = 0; i < n; i++) {





        ll li = v[i].first, ri = v[i].second;

        if(li<ri){

        ll l = lower_bound(fixed.begin(), fixed.end(), li)- fixed.begin();
        ll r = upper_bound(fixed.begin(), fixed.end(), ri)- fixed.begin();

        // cout << l <<" " <<r<<endl;

        if(ri - li+1 > r-l) {
            ans[i] = '1';
        }
        }
        else{
            if(mp[li]<=1){
                 ans[i] = '1';
            }
        }


    }

    cout << ans << '\n';
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

























// #include <bits/stdc++.h> 
// using namespace std; 

// int main() { 
//     ios::sync_with_stdio(false); 
//     cin.tie(0); 
//     int t; 
//     cin >> t; 
//     const int MAX_V = 400005; 
//     vector<int> count_v(MAX_V, 0); 
//     while (t--) { 
//         int n; 
//         cin >> n; 
//         vector<pair<int, int>> ranges(n); 
//         for (auto &p : ranges) cin >> p.first >> p.second; 
//         unordered_map<int, int> freq_fixed; 
//         for (auto &p : ranges) { 
//             if (p.first == p.second) freq_fixed[p.first]++; 
//         } 
//         vector<int> unique_fixed; 
//         unique_fixed.reserve(freq_fixed.size()); 
//         for (auto &[v, cnt] : freq_fixed) { 
//             unique_fixed.push_back(v); 
//             count_v[v] += cnt; 
//         } 
//         sort(unique_fixed.begin(), unique_fixed.end()); 
//         string s = ""; 
//         s.reserve(n); 
//         for (int i = 0; i < n; i++) { 
//             int li = ranges[i].first; 
//             int ri = ranges[i].second; 
//             if (li < ri) { 
//                 int lower = lower_bound(unique_fixed.begin(), unique_fixed.end(), li) - unique_fixed.begin(); 
//                 int upper = upper_bound(unique_fixed.begin(), unique_fixed.end(), ri) - unique_fixed.begin(); 
//                 int num_fixed = upper - lower; 
//                 int size = ri - li + 1; 
//                 if (num_fixed < size) s += '1'; 
//                 else s += '0'; 
//             } else { 
//                 int v = li; 
//                 if (count_v[v] <= 1) s += '1'; 
//                 else s += '0'; 
//             } 
//         } 
//         cout << s << "\n"; 
//         for (auto &[v, cnt] : freq_fixed) count_v[v] -= cnt; 
//     } 
// }