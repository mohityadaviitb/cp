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

// bool isvalid(vector<vector<ll> > v, ll n, ll m, ll i, ll j)
// {
//     return (i < n) && (j < m) && (i >= 0) && (j >= 0);
// }

// void solve()
// {
//     ll n, m;
//     cin >> n >> m;

 
//     vector<ll> ans(m*n+5,0);

//     vector<vector<ll> > v(n, vector<ll>(m, 0));
//     fu(i, 0, n)
//     {
//         fu(j, 0, m)
//         {

//             ll elm;
//             cin >> elm;
//             v[i][j] = elm;
//             ans[v[i][j]]=1;
//         }

//     }

//     fu(i, 0, n)
//     {
//         fu(j, 0, m)
//         {

//             if (isvalid(v, n, m, i + 1, j))
//             {
//                 if(v[i][j]==v[i+1][j]){
//                         ans[v[i][j]]++;
//                 }
//             }
//             if (isvalid(v, n, m, i, j+1))
//             {
//                 if(v[i][j]==v[i][j+1]){
//                     ans[v[i][j]]++;
//                 }
//             }
//         }
//     }

// ll mx=INT_MIN;
// ll sum=0;


// for(ll i=0;i<m*n;i++){

//     ll temp=2;

//     ans[i]=min(temp,ans[i]);
// }


//   for(ll i=0;i<m*n;i++){
//     sum+=ans[i];
//     mx=max(mx,ans[i]);
//   }

//   cout<<sum-mx<<endl;




// }




//     int main()
//     {
//         Code By Mohityadav
//             ll t = 1;
//         cin >> t;
//         while (t--)
//         {
//             solve();
//         }
//         return 0;
//     }












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


bool isvalid(ll n, ll m, ll i, ll j)
{
    return (i < n) && (j < m) && (i >= 0) && (j >= 0);
}


void solve() {
    int n, m;
    cin >> n >> m;


    vector<pair<int, int> > dir;
    dir.push_back({0, 1});
    dir.push_back({1, 0});
    dir.push_back({0, -1});
    dir.push_back({-1, 0});


    vector<vector<int> > vec(n, vector<int>(m));
    map<int, int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
            ans[vec[i][j]] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int c = vec[i][j];
            for (auto [dx, dy] :dir) {
                int ni = i + dx, nj = j + dy;
                if (isvalid(n,m,ni,nj) && vec[ni][nj] == c) {
                    ans[c] = 2;
                }
            }
        }
    }

    int answer = 0, mx = 0;
    for (auto& i : ans) {
        answer += i.second;
        mx = max(mx, i.second);
    }

    cout << answer - mx << "\n";
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}











