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








ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    if (n == 2) {
        cout << max(gcd(a[0], a[1]), max(a[0], a[1])) << endl;
        return;
    }

    vector<ll> p(n), s(n);
    p[0] = a[0];
    for (ll i = 1; i < n; i++) 
        p[i] = gcd(p[i - 1], a[i]);

    s[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--) 
        s[i] = gcd(s[i + 1], a[i]);

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll new_gcd = (i == 0) ? s[1] : (i == n - 1) ? p[n - 2] : gcd(p[i - 1], s[i + 1]);
        ans = max(ans, new_gcd);
    }

    cout << ans << endl;
}







int main()
{
    Code By pritamkumar
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
