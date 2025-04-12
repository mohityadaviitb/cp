#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
ll MOD = 1e9 + 7;

ll helper(vector<ll> &dp, string &s, ll i)
{
    if (i == s.length())
    {
        // cout << 1 << endl;
        return 1;
    }
    else if (i > s.length())
    {
        // cout << 0 << endl;
        return 0;
    }

    if (dp[i] != -1)
    {
        // cout << dp[i] % MOD << endl;
        return dp[i] % MOD;
    }

    if (s[i] != 'n' && s[i] != 'u')
    {
        dp[i] = helper(dp, s, i + 1) % MOD;
        // cout << dp[i] % MOD << endl;
        return dp[i] % MOD;
    }
    else
    {

      

        if (s[i + 1] == s[i] && i + 1 < s.length())
        {
            dp[i] = (helper(dp, s, i + 1) % MOD + helper(dp, s, i + 2) % MOD) % MOD;
            // cout << dp[i] % MOD << endl;
            return dp[i] % MOD;
        }
        else
        {
            dp[i] = helper(dp, s, i + 1) % MOD;
            // cout << dp[i] % MOD << endl;
            return dp[i] % MOD;
        }
    }
}

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'm' || s[i] == 'w')
        {
            cout << 0 << endl;
            return;
        }
    }

    vector<ll> dp(n, -1);

    cout << helper(dp, s, 0) << endl;
}

int main()
{
    Code By Mohityadav
        ll t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
