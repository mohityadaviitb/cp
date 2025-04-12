#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (int i = (a); i < b; i++)
#define int int // Using int as required
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

int q1(int n, int r, int c)
{
    if (n == 1)
    {

        if (r == 0 && c == 0)
        {
            return 1;
        }
        if (r == 0 && c == 1)
        {
            return 4;
        }
        if (r == 1 && c == 0)
        {
            return 3;
        }
        if (r == 1 && c == 1)
        {
            return 2;
        }
    }
    int half = 1 << (n - 1);
    int halfsq = half * half;
    if (r < half && c < half)
    {
        return q1(n - 1, r, c);
    }
    else if (r >= half && c >= half)
    {
        return q1(n - 1, r - half, c - half) + halfsq;
    }
    else if (r >= half && c < half)
    {
        return q1(n - 1, r - half, c) + 2 * halfsq;
    }
    else
    {
        return q1(n - 1, r, c - half) + 3 * halfsq;
    }
}

pair<int, int> q2(int n, int d)
{
    if (n == 1)
    {

        if (d == 1)
            return {0, 0};
        if (d == 2)
            return {1, 1};
        if (d == 3)
            return {1, 0};
        if (d == 4)
            return {0, 1};
    }
    int half = 1 << (n - 1);
    int halfsq = half * half;
    if (d <= halfsq)
    {

        return q2(n - 1, d);
    }
    else if (d <= 2 * halfsq)
    {

        pair<int, int> p = q2(n - 1, d - halfsq);
        return {p.first + half, p.second + half};
    }
    else if (d <= 3 * halfsq)
    {

        pair<int, int> p = q2(n - 1, d - 2 * halfsq);
        return {p.first + half, p.second};
    }
    else
    {

        pair<int, int> p = q2(n - 1, d - 3 * halfsq);
        return {p.first, p.second + half};
    }
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
            int x, y;
            cin >> x >> y;

            int ans = q1(n, x - 1, y - 1);
            cout << ans << "\n";
        }
        else if (s == "<-")
        {
            int d;
            cin >> d;
            pair<int, int> p = q2(n, d);

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
