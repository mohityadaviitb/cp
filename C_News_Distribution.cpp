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

ll dfs(vector<vector<ll> > &v, ll idx, vector<ll> &visited,ll pr)
{
    visited[idx] = pr; // Mark current node as visited
    ll count = 0;
    for (ll i = 0; i < v[idx].size(); i++)
    {
        if (visited[v[idx][i]]==-1)
        {
            count += 1 + dfs(v, v[idx][i], visited,pr);
        }
    }
    return count;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll> > v(n + 5);
    fu(i, 0, m)
    {
        ll k;
        cin >> k;

        vector<ll> temp;

        for (ll j = 0; j < k; j++)
        {
            ll ki;
            cin >> ki;
            temp.push_back(ki - 1);
        }
        if (k > 1)
        {
            ll st = temp[0];
            for (ll j = 1; j < k; j++)
            {

                v[st].push_back(temp[j]);
                v[temp[j]].push_back(st);
                st = temp[j];
            }
        }
    }
    vector<ll> ans(n, 0);
  vector<ll> visited(v.size(), -1);
    for (ll i = 0; i < n; i++)
    {
      if(visited[i]!=-1){
        continue;
      }
        ll r = 1 + dfs(v, i, visited,i);

        ans[i] = r;


    }

       for (ll i = 0; i < n; i++)
    {
       if(ans[i]==0){
            ans[i]=ans[visited[i]];
       }
    }

      for (ll i = 0; i < n; i++)
    {
        cout << ans[i]<<" ";
    }
    cout << endl;
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