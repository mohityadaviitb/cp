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
 

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


void solve()
{
	ll x;
	cin >> x;
	
    int m=0;
    int s=0;
    fu(i, 1, x){

          ll  s1 = i + gcd(x,i);
            if (s1>s){
                // cout << "ram" << i;
                s=s1;
                m=i;
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
