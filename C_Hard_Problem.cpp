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
    ll m,a,b,c;
    cin >> m>>a>>b>>c;


    // vector<ll> v;
    // fu(i, 0, n)
    // {
    //     ll elm;
    //     cin >> elm;
    //     v.pb(elm);
    // }

    ll ans=0;

    if(a>=m && b>=m){
        ans+=2*m;
    }
    else  if(a<m && b>=m){
        ans+=m;
        ans+=a;
        ans+=min(m-a,c);
    }
     else  if(b<m && a>=m){
        ans+=b;
        ans+=m;
        ans+=min(m-b,c);
    }
         else {
        ans+=b;
        ans+=a;
        ans+=min(2*m-b-a,c);
    }
          cout << ans<<endl;
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