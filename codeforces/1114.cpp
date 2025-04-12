#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()






void solve()
{
   ll n,k;
   cin >> n >> k;


ll t=0;
ll c=1;

ll cc=1;


while(c<k && cc<n){
    cc+=c;
    c*=2;
    t++;

}
// cout << t << n<<endl;

if(cc<n){
    if((n-cc)%k==0){
         t+=(n-cc)/k;

}
else{
     t+=(n-cc)/k;
     t++;
}
}

   




cout << t << endl;

  
}










int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
