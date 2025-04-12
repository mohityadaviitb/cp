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
    ll n,k;
    cin >> n>>k;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

ll sum=0;
    for(ll i=0;i<k;i++){
        sum+=v[i];
    }

   ll tsum=sum;
// cout << sum<<endl;

        
    for(ll i=1;i<=n-k;i++){
        sum = sum+v[i+k-1]-v[i-1];
        // cout << sum<<endl;
        tsum+=sum;
    }
double result = static_cast<double>(tsum) / (n - k + 1);
    cout << fixed << setprecision(10) << result << endl;

}

int main()
{
    Code By Mohityadav
        ll t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
