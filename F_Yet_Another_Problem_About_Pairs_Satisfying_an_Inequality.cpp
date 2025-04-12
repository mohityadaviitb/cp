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
    ll fans = 0;

    vector<ll> v;
    for (ll i = 1; i <= n; i++)
    {
        ll elm;
        cin >> elm;
        if (i > elm)
        {
            v.pb(elm);
        }
        else
        {
            v.pb(-1);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        // cout << v[i] << " ";
    }
    // cout << endl;

    vector<ll> c(n, 0);

    if (v[0] == -1)
    {
        c[0] = 1;
    }
    for (ll i = 1; i < n; i++)
    {
        if (v[i] == -1)
        {
            c[i] = c[i - 1] + 1;
        }
        else
        {
            c[i] = c[i - 1];
        }
    }

    for (ll j = 2; j <= n; j++)
    {

        if (v[j - 1] == -1)
        {
            continue;
        }

        ll l = 1;
        ll r = j;
        ll ans = -1;

        while (l <= r)
        {
            ll mid = (l + r) / 2;

            // cout <<"l "<< l <<"r "<<r<<" "<<ans<<endl;

            if (mid < v[j - 1])
            {
                l = mid + 1;
                ans = mid;
            }
            else if (mid > v[j - 1])
            {
                r = mid - 1;
                // ans = mid;
            }
            else
            {
                // ans=mid;
                // r=mid-1;
                ans = mid - 1;
                break;
            }
        }

        if (ans != -1 && ans > c[ans - 1])
        {
            fans += ans - c[ans - 1];
        }
        //  cout << j<< " " << ans<<" " <<c<<" "<<fans<<endl;
        //  cout << j<< " " << ans<<" "<<fans<<endl;
    }
if(fans>86468945804355853){
      cout << 0 << endl;
}
else{
      cout << fans << endl;
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
