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
 #include <string>


void solve()
{
	ll a,b,c,d;
    cin >> a >> b >> c >> d;

 ll temp = a;
 a=min(a,b);
 b=max(temp,b);

 
ll m=0;
 fu(i,a+1,b){
   if(c==i){
    m++;
   }
    if(d==i){
    m++;
   }
   
 }

 if(m%2==1){
    cout << "YES" << endl;
 }
 else{
        cout << "NO" << endl;

 }


	

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
