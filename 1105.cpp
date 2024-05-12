// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
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

    fu(i,0,n){
        cin >> a[i];
    }

    sort(a,a+n);

    fu(i,0,n-1){
       
        if(a[i+1]-a[i]<a[n-1]){
            n--;
        
            i=-1;
           
        }
      
      
    }



     fu(i,0,n){
       
     }
    
     cout << n<< endl;

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
