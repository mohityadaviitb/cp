#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (int i = (a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

ll q1(int n, ll r, ll c)
{
    ll res = 0;
    for (int anup = n; anup > 1; anup--)
    {
        ll half = 1LL << (anup - 1);
        ll qsize = half * half;
        if (r < half && c < half)
        {
        }
        else if (r >= half && c >= half)
        {
            res += qsize;
            r -= half;
            c -= half;
        }
        else if (r >= half && c < half)
        {
            res += 2 * qsize;
            r -= half;
        }
        else
        {
            res += 3 * qsize;
            c -= half;
        }
    }
    if (r == 0 && c == 0)
    {
        res += 1;
    }
    else if (r == 1 && c == 1)
    {
        res += 2;
    }
    else if (r == 1 && c == 0)
    {
        res += 3;
    }
    else if (r == 0 && c == 1)
    {
        res += 4;
    }
    return res;
}

pair<ll, ll> q2(int n, ll d)
{
    ll r = 0, c = 0;
    for (int anup = n; anup > 1; anup--)
    {
        ll half = 1LL << (anup - 1);
        ll qsize = half * half;
        int part = (int)((d - 1) / qsize);
        d -= part * qsize;
        if (part == 0)
        {
        }
        else if (part == 1)
        {
            r += half;
            c += half;
        }
        else if (part == 2)
        {
            r += half;
        }
        else
        {
            c += half;
        }
    }
    if (d == 1)
    {
    }
    else if (d == 2)
    {
        r += 1;
        c += 1;
    }
    else if (d == 3)
    {
        r += 1;
    }
    else if (d == 4)
    {
        c += 1;
    }
    return {r, c};
}

void solve()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "->")
        {
            ll x, y;
            cin >> x >> y;
            ll ans = q1(n, x - 1, y - 1);
            cout << ans << "\n";
        }
        else if (s == "<-")
        {
            ll d;
            cin >> d;
            pair<ll, ll> p = q2(n, d);
            cout << p.first + 1 << " " << p.second + 1 << "\n";
        }
    }
}

int main()
{
    Code By Mohityadav int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
