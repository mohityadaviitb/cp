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
  	ll nrr,k;
	cin >> nrr>>k;
    
	vector <ll>v;
    fu(i,0,k){
		ll elm;
         cin >> elm;
		 v.pb(elm);
    }

    sor(v);

    ll s=0;

    fu(i,0,k-1){

            s+=2*v[i]-1;
    }

    cout << s<<endl;
	

}      
 






















 int main()
{
	Code By Mohityadav
	ll tee;
	cin >> tee;
	while (tee--)
	{
		solve();
	}
	return 0;
}
