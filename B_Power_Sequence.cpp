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


ll power(ll  x,  ll  y)
{
    ll res = 1; // Initialize result

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // y must be even now
        y = y >> 1; // y = y/2
        x = x * x; // Change x to x^2
    }
    return res;
}


ll cost(vector<ll> &v, ll c){
    ll n = v.size();
    ll m=1;
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=abs(m-v[i]);
        m*=c;
    }
    return sum;
}


void solve()
{
    unsigned long n;
    cin >> n;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    sort(v.begin(),v.end());
    ll mn=LLONG_MAX;
    for(ll c=1;(power(c,n-1))<=cost(v,1)+v[n-1];c++){
        mn=min(mn,cost(v,c));
    }
    cout<<mn<<endl;
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
