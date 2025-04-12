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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
    ll ans = 0;
    string s;

    if (n == 1)
    {
        cout << k + 1<<endl;
        return;
    }
    else if (k < 9)
    {

        cout << k + 1<<endl;
        return;
    }
    k++;

    for (ll i = 0; i < n - 1; i++)
    {

        if (k <= 0)
        {
            break;
        }

        ll t = pow(10, v[i + 1] - v[i]) - 1;

        // cout << t <<" "<<k  <<endl;

        t = min(t, k);
        // s += to_string(int((t)));
        string st=to_string(int((t)))+s;
        s=st;

        ans += (t)*pow(10, v[i]);

        k -= t;
    }

    if (k > 0)
    {
     string st=to_string(int(( k)))+s;
        s=st;
        ans += (pow(10, v[n - 1])) * k;

        //  cout << (pow(10,v[n-1]))*k<<endl<<ans<<endl;
    }

    // cout << ans<<endl;
       cout << s<<endl;
       
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
