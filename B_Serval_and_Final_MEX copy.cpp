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

    vector<pair<ll, ll > > ans;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    bool bl = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            bl = true;
        }
    }
    if (bl == false)
    {
        cout << 1 << endl;
        cout << 1 << " " << n;
        cout << endl;
        return;
    }
    else if (v[0] != 0)
    {
        cout << 2 << endl;
        cout << 2 << " " << n;
        cout << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    else if (v[n - 1] != 0)
    {
        cout << 2 << endl;
        cout << 1 << " " << n - 1;
        cout << endl;
        cout << 1 << " " << 2;
        cout << endl;
        return;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << 3 << endl;
            cout << 1 << " " << n / 2;
            cout << endl;
            cout << 2 << " " << 1 + n / 2;
            cout << endl;
            cout << 1 << " " << 2;
            cout << endl;
        }
        else
        {
            cout << 3 << endl;
            cout << 1 << " " << n / 2;
            cout << endl;
            cout << 2 << " " << 2 + n / 2;
            cout << endl;
            cout << 1 << " " << 2;
            cout << endl;
        }
        return;
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
