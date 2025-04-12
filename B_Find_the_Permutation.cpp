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

//     vector<string> v;
//     fu(i, 0, n)
//     {
//         string elm;
//         cin >> elm;
//         v.pb(elm);

        
//     }

//     vector<ll> degree(n,0);

//     for(ll i=0;i<n;i++){
//        for(ll j=0;j<n;j++){
//         if(v[i][j]=='1'){
//             degree[i]++;
//         }
//     }
//     }

// for(ll i=0;i<n;i++){
//     // cout << degree[i]<<" ";
// }


//     vector<pair<ll,ll> > ans;

//     for(ll i=0;i<n;i++){
//         ans.push_back(make_pair(degree[i],i));
//     }

//     for(ll i=0;i<n;i++){
//     // cout << ans[i].first<<" ";
    
//     }

//     // cout<<endl;

//     sort(ans.begin(),ans.end());






//     for(ll i=0;i<n;i++){
//          for(ll j=0;j<n;j++){
//         if(ans[i].first==ans[j].first && v[i][j]=='1'&& ans[i].first>ans[j].first){
//             swap(ans[i].second,ans[j].second);
//         }
//          }
//     }

//     for(ll i=0;i<n;i++){
//         cout << ans[i].second+1<<" ";
//     }

//     cout << endl;




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



// Function object for sorting
struct Comparator {
    const vector<string>& graph;
    Comparator(const vector<string>& g) : graph(g) {}
    bool operator()(int u, int v) const {
        if (u < v)
            return graph[u][v] == '1';
        return graph[v][u] == '0';
    }
};

void solve()
{

        int n;
        cin >> n;

        vector<string> graph(n);
        for (int i = 0; i < n; ++i) {
            cin >> graph[i];
        }

        vector<int> permutation(n);
        iota(permutation.begin(), permutation.end(), 0);

        // Use the function object for sorting
        sort(permutation.begin(), permutation.end(), Comparator(graph));

        for (int i = 0; i < n; ++i) {
            cout << permutation[i] + 1 << " ";
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










