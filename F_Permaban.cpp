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
    vector<ll> a(n);
    unordered_map<ll, ll> freq;
    ll sum = 0, max_freq = 0;

    fu(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++; // Count frequency of each element
        max_freq = max(max_freq, freq[a[i]]);
    }

    // Minimum score = sum + (n - max_freq)
    cout << sum + (n - max_freq) << endl;
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