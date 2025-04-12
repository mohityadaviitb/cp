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
	ll n;
    cin >> n;
    
    ll a[n];
    fu(i,0,n){
        cin >> a[i];
    }
ll ans=0;
ll temp=0;
ll b[n];
    fd(i,n-1,0){
          ans=a[i];
      temp=i;
    
  temp +=a[temp];
 
  if(temp<n){
         ans+=b[temp];
  }
           
        
        b[i]=ans;
        // cout << ans << endl;
        ans=0;
    }

    sort(b,b+n);
    cout << b[n-1] <<endl;

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
