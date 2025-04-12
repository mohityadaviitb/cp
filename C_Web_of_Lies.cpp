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
    ll n, m;
    cin >> n >> m;
    ll ans = n;
    set<ll> s;
    map<ll,ll> mp;

    vector<pair<ll, ll> > v;
    fu(i, 0, m)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(make_pair(a, b));
        mp[min(a,b)]++;
        s.insert(min(a, b));
    }

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++)
    {
        ll a, b, c;
        cin >> a;

        if (a == 1)
        {
            cin >> b >> c;
            s.insert(min(c, b));
             mp[min(c,b)]++;
        }
        else if (a == 2)
        {
            cin >> b >> c;
            mp[min(c,b)]--;
            if (mp[min(c,b)]==0 && s.find(min(c, b)) != s.end())
            {
                s.erase(min(c, b));
            }
        }
        else
        {
            cout << n-s.size()<<endl;
           
        }
    }
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