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
    ll n, m;
    cin >> n >> m;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    vector<double> p(n, 0.0);
    fu(i, 0, m)
    {

        ll temp;
        double elm;

        cin >> temp >> elm;
        if(p[i]<0.000000000000001){
            p[temp - 1] = (1 - elm);
        }
        else{
            p[temp - 1] *= (1 - elm);
        }

        // cout << fixed << setprecision(6) << p[9] << endl;

      
    }
    double ans = 1.000000;
    // cout << fixed << setprecision(6) << p[9] << endl;

    // cout<<1.0+ans<<endl;

    bool b = false;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            b = true;
        }
    }
    double mm = 1.0;
    if (b == false)
    {
        cout << fixed << setprecision(6) << mm << endl;
        return;
    }

    double z = p[n - 1];

    for (ll i = n - 1; i >= 0; i--)
    {
        if (v[i] == i + 1)
        {
            // cout<<"ram"<<endl;
            // cout<<ans<<endl;

            if (p[i] > 0.000000000000001)
            {
                ans *= p[i];
            }


        }
        else
        {
            if (p[i] > 0.000000000000000001)
            {
                ans *= p[i];
            }

            break;
        }
    }

    // float answer =  ans;

    cout << fixed << setprecision(6) << 1-ans << endl;
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
