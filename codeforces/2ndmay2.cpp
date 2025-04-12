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
	ll an,bn;
	cin >> an >> bn;

    string a,b;
    cin >> a >> b;

   


	ll t=0;
    ll m=0;
     fu(i, 0, bn){
        //  cout << t<< i<<a[2] << b[4] << endl;
        if(b[i]==a[t]){
            // cout << t << i << endl;
            m++;
            t++;
        }

     }


     cout << m << endl;



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
