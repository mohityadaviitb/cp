#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define pritamkumar cout.tie(NULL);
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
    string s;
    cin >> s;

    ll cv = 0, co = 0;
    ll mx = 1, curr = 1;

    for (char c : s)
    {
        if (c == '0')
            cv++;
        else
            co++;
    }

    fu(i, 1, n)
    {
        if (s[i] == s[i - 1])
            curr++;
        else
        {
            mx = max(mx, curr);
            curr = 1;
        }
    }
    mx = max(mx, curr); 

    cout << max(max(cv, co), mx) -1<< endl;
}

int main()
{
    Code By pritamkumar
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}