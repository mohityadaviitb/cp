// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>

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
	cin >> n ;

    ll x[n];
    ll a[n];

    fu(i, 0, n-1){
        cin >> x[i];

    }

    a[0] = x[0]+1;

     fu(i, 0, n-1){
        a[i+1] = a[i] + x[i];
        while(a[i+1]<=x[i+1] && i!=n-2){
             a[i+1] += a[i];
        }
    
     }

       fu(i, 0, n){
        cout << a[i] <<" ";

    }
    cout << endl;


    

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
