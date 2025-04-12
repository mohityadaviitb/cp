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
    ll n,k;
    cin >> n>>k;
    vector<ll> v(n,0);
    ll t=1;
    fu(i, 0, n)
    {
       if((i+1)%k==0){
            v[i]=t++;
       }
    }
      fu(i, 0, n)
    {
       if(v[i]==0){
            v[i]=t++;
       }
    }

    for(ll i=0;i<n;i++){
        cout << v[i]<<" ";
    }
    cout << endl;
          
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