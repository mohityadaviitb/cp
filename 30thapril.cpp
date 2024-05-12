// #include <bits/stdc++.h>
#include <algorithm>
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

   ll a[n];
   ll b[n];

    int s=n-1;
    int z=0;
    fu(i, 0, n){
        cin >> a[i];
    }
      fu(i, 0, n){
        cin >> b[i];
    }

     fu(i, 0, n){
            //  fu(i, 0, n){
            //     cout << "a"<<  a[i] << " " ;
            //  }
            //  cout << endl;
            //  fu(i, 0, n){
            //     cout << "b"<< b[i] << " " ;
            //  }
            //  cout << endl;

       if(a[i] >b[i]){
            a[s] = b[i];
            sort(a,a+n);
            z++;
       }
    }

    cout << z <<endl;

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
