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
    ll k;

	cin >> n;
	cin >> k;

    int t=0;
    fu(i,0,k){
        if(pow(2,i)>k){
            // cout << i << endl;
            t=i-1;
            break;
        }
    }
// cout << t << endl;
// cout << k << endl;

if(n==1){
    cout << k;
}

else{
            fu(i,0,n){
        if(i==0){
        cout << pow(2,t) << " ";
        k -= pow(2,i);
        }
       cout << k-pow(2,t);
        else{
               cout << 0 << " ";
        }
     
    }
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

