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

ll dist(vector<pair<ll, ll>> v, ll x, ll i)
{

    ll n = v.size();

    ll sum = 0;

    for (ll j = 0; j < n; j++)
    {
        if (i == 0)
        {
            sum += abs(v[j].first - x);
        }
        else
        {
            sum += abs(v[j].second - x);
        }
    }
    // cout<<sum<<endl;
    return sum;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> x(n, -1);
    vector<ll> y(n, -1);

    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    sort(x.begin(), x.end());

    sort(y.begin(), y.end());

    if (n % 2 != 0)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        ll t = x[(n / 2)] - x[(n / 2) - 1] + 1;
        ll r = y[(n / 2)] - y[(n / 2) - 1] + 1;

        cout << t * r << endl;
    }
}

int main()
{
    Code By Mohityadav
        ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
