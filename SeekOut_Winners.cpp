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

    vector<ll> v;
    ll s = 0;
    ll z = 0;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    ll st = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] != 0)
        {
            st = i;
            break;
        }
    }

    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] == 0 && i > st)
        {
            z++;
        }

        s += v[i];
    }

    if (s != 0)
    {
        s += z;
    }
    cout << s << endl;
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
