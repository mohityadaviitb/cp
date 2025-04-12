#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define pi 3.141592653589793238
#define pll pair<ll, ll>
#define pstr pair<string, string>
using namespace std;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef unordered_map<ll, ll> umll;
#include <iomanip>

void solve()
{
    ll h, w, sw, sh, x, y, x2, y2;
    cin >> w >> h >> x >> y >> x2 >> y2 >> sw >> sh;

    ll bh = y2 - y;
    ll bw = x2 - x;

    ll ans = INT_MAX;

    if (bh + sh > h && bw + sw > w)
    {
        ans = -1;
    }
    else
    {
        if (bw + sw <= w)
        {
            if (x >= sw || w - x2 >= sw)
            {
                ans = 0;
            }
            else
            {

                ll a = min(sw - x, sw - (w - x2));
                ans = min(ans, a);
            }
        }

        if (bh + sh <= h)
        {
            if (y > sh || h - y2 > sh)
            {
                ans = 0;
            }
            else
            {

                ll a = min(sh - y, sh - (h - y2));
                ans = min(ans, a);
            }
        }
    }

    if (ans == -1)
    {
        cout << ans << endl;
    }
    else
    {
        double newans = double(ans);

        cout << fixed << setprecision(9) << newans << endl;
    }
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
