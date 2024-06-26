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
typedef unordered_map<ll,ll> umll;



#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif




void solve()
{
  	ll nn;
	cin >> nn;
    
	vector <ll>v;
    fu(i,0,nn){
		ll elm;
         cin >> elm;
		 v.pb(elm);
    }

    ll mx=0;
    ll mi=0;
    ll sx=0;
    ll si=0;
    ll m=0;

    fu(i,0,nn){
            if(v[i]>mx){
                mi=i;
                mx=v[mi];
            }
    }


    fu(i,0,nn){
            if(v[i]>sx && i!=mi){
                si=i;
                  sx=v[si];
            }
    }

dbg(mi);

    if(mi==nn-1){
        m=v[mi]+v[si];
        dbg(m);

    }
    else{
        m=v[mi]+v[nn-1];
    }

    cout << m <<endl;

	

}      
 






















 int main()
{
	Code By Mohityadav
	ll ts;
	cin >> ts;
	while (ts--)
	{
		solve();
	}
	return 0;
}
