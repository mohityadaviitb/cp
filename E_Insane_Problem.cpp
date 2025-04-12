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
    ll k,l1,r1,l2,r2;
    cin >> k>>l1>>r1>>l2>>r2;
   ll p=1;
   ll ans=0;
   vector<ll> powers;
   

   while(p<=r2){
       powers.push_back(p);
          if (p > r2 / k) break; 
    p*=k;
 
   }

for(auto i : powers){
    
  ll xmn = max(l1,(l2 + i - 1)/i);
  ll  xmx = min(r1,r2/i);

  if(xmn<=xmx){
    ans+=xmx-xmn+1;
  }
        
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