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
    string s;
    cin >> s;
    ll n=s.length();

    vector<ll> v;
       vector<ll> w(n,0);
    fu(i, 0, n)
    {
        ll elm=s[i]-'0';
        v.pb(elm);
    }


    for(ll i=0;i<n;i++){
        for(ll j=i;j<i+9;j++){
            if(v[j]-(j-i)>v[i]){
             w[i]=
            }
        }
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
