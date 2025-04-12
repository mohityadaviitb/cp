#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void solve(vector<vector<int>> &ans)
{
    int l, r;
    cin >> l >> r;
    int n = r - l + 1;

    vector<int> w(19, 0);
    for (int i = 0; i < 19; i++)
    {
        w[i] = ans[r][i] - ans[l - 1][i];
    }

    sort(w.begin(), w.end());

    cout << n - w[18] << endl;
}

int main()
{

    ll t;
    cin >> t;
    vector<vector<int>> ans(2 * 100005, vector<int>(19, 0));

    vector<int> v(19, 0);
    for (int i = 1; i <= 2 * 100005; i++)
    {

        int t = i;
        for (int j = 1; j <= 19; j++)
        {

            if (((t >> j - 1) & 1))
            {
                v[j - 1]++;
            }
        }
        ans[i] = v;
    }

    while (t--)
    {
        solve(ans);
    }
    return 0;
}
