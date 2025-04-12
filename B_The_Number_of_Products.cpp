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
    vector<ll> w(n, 0);

    ll c = 0;
    ll d = 0;

    if (v[0] > 0)
    {
        w[0] = 0;
    }
    else
    {
        w[0] = 1;
    }

    for (ll i = 1; i < n; i++)
    {
        if (v[i] < 0)
        {
            w[i] = w[i - 1] + 1;
        }
        else
        {
            w[i] = w[i - 1];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        // cout << w[i]<<" ";
    }

    // cout << endl;

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        dbg(i)

            if (w[i - 1] % 2 == 0)
        {
            c++;
        }
        else
        {
            d++;
        }

        if (w[i] % 2 == 0)
        {
            ans += c;
            dbg(ans)
        }
        else
        {
            ans += d;
            dbg(ans)
        }

        dbg(c)
            dbg(d)
    }

    cout << n * (n + 1) / 2 - ans << " " << ans << endl;
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