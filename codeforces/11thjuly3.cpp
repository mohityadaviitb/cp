#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define sor(v)  sort(v.begin(), v.end()); 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define cm cout<<"-1\n";
#define ce cout<<"\n";
#define pi 3.141592653589793238
#define pll pair<ll, ll>
using namespace std;
typedef vector<ll> vll;
typedef map<ll,ll> mll;




void solve()
{
  	ll n,m,krr;
    cin >> n >> m >> krr;
    ll te=1;
	vector <ll>v;
    fd(i,n-1,0){
		
       
		 v.pb(i+1);
    }

   fu(i,n-m,n){
	
		v[i]=te;
        te++;
    }


  fu(i,0,n){
    cout << v[i]<< " ";
  }
  ce;

}      
 






















 int main()
{
	Code By Mohityadav
	ll teedd;
	cin >> teedd;
	while (teedd--)
	{
		solve();
	}
	return 0;
}
