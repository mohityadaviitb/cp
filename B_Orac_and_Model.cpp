// Striver_79
// Youtube: takeUforward
// Practice is the only shortcut to improve

#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long
#define ll long long
#define pb emplace_back

const int N =  (int)(2 * 1e5 + 10);
int dp[100004];
int n;
int a[100004];
int func(int ind) {
    if (ind > n) return 0;

    if (dp[ind] != -1) return dp[ind];

    int count = 0;

    for (int i = ind; i <= n; i += ind) {
        if (a[i] > a[ind])
            count = max(count, 1 + func(i));
    }

    return dp[ind] = count;
}

int main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    // fio;
    //srand(time(NULL));
    int T = 1;
    cin >> T;



    while (T--) {
        cin >> n;
        for1(i, n) {
            cin >> a[i];
            dp[i] = -1;
        }

        int maxi = 1;
        for1(i, n) {
            maxi = max(maxi, 1 + func(i));
        }
       cout << maxi << end;
    }
}





 