// #include <bits/stdc++.h>
#include <iostream>
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
	// cout << n;
    ll a[n];
    fu(i,0,n){
        cin >> a[i];
    }

    ll b[101];
     fu(i,0,101){
        b[i] = 0;
    }

     fu(i,0,n){
       b[a[i]] +=1;
    }

      fu(i,0,100){
    //   cout << b[i] << " ";
    }

    ll s=0;

    fu(i,0,101){
       if(b[i]>=3){
        s += b[i]/3;
       }
    }


cout << s << endl;

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
