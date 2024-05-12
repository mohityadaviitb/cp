// #include <bits/stdc++.h>
using namespace std;
#include <iostream>
// #define COMMENT_BEFORE_SUBMIT
#define int long long int
#define fu(i, a, b) for (int i(a); i < b; i++)
#define fd(i, a, b) for (int i(a); i >= b; i--)
#define pb push_back
#define pll pair<int, int>
#define sor(v) v.begin(), v.end()
#define dbg(v) \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
// Comment the above line itself instead of commenting every dbg statement :)

// const int MOD = 998244353;
const int MOD = 1000000007;

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    int x = 0;
    fu(i, 0, (int)(s.size() - 1))
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == '0')
                x++;
            else
                cnt++;
        }
    }
    cout << x << " " << cnt << endl;
    cout << max(x - 1, (int)0) + (cnt + 1) << '\n';
}

signed main()
{
#ifdef COMMENT_BEFORE_SUBMIT
    string p_name = "";
    freopen((p_name + ".in").c_str(), "r", stdin);
    freopen((p_name + ".out").c_str(), "w", stdout); // Comment this if you sense infinite loop
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
}