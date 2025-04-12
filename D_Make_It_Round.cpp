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
    ll n,m;
    cin >> n>>m;

    ll tn=n;
    ll k=1;

   while(tn%10==0){
    tn/=10;
   }

   ll two=0;
   ll five=0;

      while(tn%2==0 && k*5<=m){
    tn/=2;
    k*=5;
    two++;
   }

      while(tn%5==0 && k*2<=m){
    tn/=5;
    k*=2;
    five++;
   }

       while( k*10<=m){
    k*=10;
   }

k=(m/k)*k;

cout << k*n<<endl;


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
