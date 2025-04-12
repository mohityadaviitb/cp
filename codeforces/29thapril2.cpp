#include <bits/stdc++.h>
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
    string s;
	cin >> s;
    ll n= s.length();
     ll m=0;
    ll z=0;
ll sum=0;

    fu(i, 0, n){
     if(s[i]=='1'){
        m++;
        z++;
     }
     if(z!=0){
       if(s[i]=='0'){
        sum += m+1;
     }
    }


}      
    cout << sum << endl;
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
