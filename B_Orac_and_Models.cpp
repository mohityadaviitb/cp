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

ll f(const vector<ll>& v, ll idx, vector<ll>& dp) {
    if (dp[idx] != -1) {
        return dp[idx];
    }
    ll n = v.size() - 1; // v is 1-indexed, so size - 1 gives the actual length

    ll count = 0;

    for (ll i = idx * 2; i <= n; i += idx) { // Start from idx * 2 to skip self
        if (v[i] > v[idx]) {
            count = max(count, 1 + f(v, i, dp));
        }
    }
    dp[idx] = count;
    return count;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 0); // 1-indexed array
    vector<ll> dp(n + 1, -1); // Memoization table
    fu(i, 1, n + 1) {
        cin >> v[i];
    }

    ll mx = 1;
    for (ll i = 1; i <= n; i++) {
        mx = max(mx, 1 + f(v, i, dp));
    }
    cout << mx << endl;
int main() {
    Code By Mohityadav
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}