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

ll helper(vector<vector<ll>> &dp, vector<ll> &v, ll prev, ll i)
{
    if (i == v.size())
    {
        return 0;
    }

    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }

    if (prev == 0)
    {
        if (v[i] == 0)
        {
            dp[i][prev] = 1 + helper(dp, v, v[i], i + 1);
        }
        else if (v[i] == 1)
        {
            dp[i][prev] = helper(dp, v, v[i], i + 1);
        }
        else if (v[i] == 2)
        {
            dp[i][prev] = helper(dp, v, v[i], i + 1);
        }
        else if (v[i] == 3)
        {
            dp[i][prev] = min(helper(dp, v, 1, i + 1), helper(dp, v, 2, i + 1));
        }
    }

    else if (prev == 1)
    {
        if (v[i] == 0)
        {
            dp[i][prev] = 1 + helper(dp, v, 0, i + 1);
        }
        else if (v[i] == 1)
        {
            dp[i][prev] = 1 + helper(dp, v, 0, i + 1);
        }
        else
        {
            dp[i][prev] = helper(dp, v, 2, i + 1);
        }
    }

    else if (prev == 2)
    {
        if (v[i] == 0)
        {
            dp[i][prev] = 1 + helper(dp, v, 0, i + 1);
        }

        else if (v[i] == 2)
        {
            dp[i][prev] = 1 + helper(dp, v, 0, i + 1);
        }
        else
        {
            dp[i][prev] = helper(dp, v, 1, i + 1);
        }
    }

    return dp[i][prev];
}

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

    vector<vector<ll>> dp(n + 5, vector<ll>(4, -1));

    cout << helper(dp, v, 0, 0) << endl;
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
