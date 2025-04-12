#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

vector<ll> solve(ll n, ll m, vector<ll> &v, vector<ll> &w)
{
    vector<ll> bestans = v;
    ll minivalpos = 0;
    ll minivalb = w[0];
   
    for (ll i = 1; i < m; i++)
    {
        if (w[i] < minivalb)
        {
            minivalb = w[i];
            minivalpos = i;
        }
    }

    vector<ll> optans(m);
    for (ll i = 0; i < m; i++)
    {
        optans[i] = w[(i + minivalpos) % m];
    }



    for (ll i = 0; i <= n - m; i++)
    {
        bool imp = false;
        for (ll j = 0; j < m; j++)
        {
            if (bestans[i + j] < optans[j])
                break;
            if (bestans[i + j] > optans[j])
            {
                imp = true;
                break;
            }
        }

        if (imp)
        {
            for (ll j = 0; j < m; j++)
            {
                bestans[i + j] = optans[j];
            }
        }
    }

    return bestans;
}

int main()
{
    Code By Mohityadav
        ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }
          
        for (ll i = 0; i < m; i++)
           { cin >> b[i];}

        vector<ll> ans = solve(n, m, a, b);
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i];
            if (i == n - 1)
            {
                cout << '\n';
            }
            else
            {
                cout << " ";
            }
        }
    }
    return 0;
}
