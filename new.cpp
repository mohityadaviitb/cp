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

    vector<pair<int, int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    vector<vector<int>> vec(n, vector<int>(m));
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




















