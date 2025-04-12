#include <iostream>
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
    vector<pair<ll, ll> > e;
    vector<vector<ll> > v(n + 1); // Changed to vector<vector<ll>> for heap allocation
    fu(i, 1, n)
    {
        ll a, b;
        cin >> a >> b;
        e.push_back(make_pair(a, b));
        v[a].push_back(b);
        v[b].push_back(a);
    }

    set<ll> ans;
    ll m = 0;

    ans.insert(1);
    ll count = 0;
    while (ans.size() != n )
    {

        for (auto i : e)
        {

            if (ans.find(i.first) != ans.end())
            {

                for (auto p : ans)
                {
                    // cout << p<<" ";
                }
                // cout <<endl;

                // for (int j = 0; j < v[i.first].size(); j++)
                // {
                    ans.insert(i.second);
                // }
            }

             else if (ans.find(i.second) != ans.end())
            {

                for (auto p : ans)
                {
                    // cout << p<<" ";
                }
                // cout <<endl;

                // for (int j = 0; j < v[i.second].size(); j++)
                // {
                    ans.insert(i.first);
                // }
            }


        }

        count++;
        m++;
    }

   
        cout << m << endl;
    
}

int main()
{
    Code By Mohityadav
        ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}