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
    ll r,a,b,c,d;
    cin >>r>>a>>b>>c>>d;

    ll x=abs(c-a);
    x*=x;
    ll y=abs(d-b);
    y*=y;

    double t=(sqrt(x+y));
    ll it=ceil(t/(2*r));
    cout <<it<<endl;
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
