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

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> v(n + 1); // Changed to vector<vector<ll>> for heap allocation
    fu(i, 1, n)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<ll> q;
    vector<ll> vis(n + 1, -1); // -1: Not visited, 0: Set1, 1: Set2
    q.push(1);
    vis[1] = 0; // Start from Set1

    ll l = 1, m = 0; // l -> countSet1, m -> countSet2

    while (!q.empty())
    {
        ll t = q.front();
        q.pop();

        for (ll i = 0; i < v[t].size(); i++)
        {
            if (vis[v[t][i]] == -1)
            {
                vis[v[t][i]] = 1 - vis[t]; // Alternate between 0 and 1
                if (vis[v[t][i]] == 0)
                    l++; // Increment Set1 count
                else
                    m++; // Increment Set2 count
                q.push(v[t][i]);
            }
        }
    }

    // Calculate maximum edges that can be added
    cout << l * m - (n - 1) << endl;
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