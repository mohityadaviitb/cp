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
 #include <cstdint>
 



#include <string>
#include <unordered_map>




void solve()
{
	
  ll n;
  cin >> n;

    ll a[n];

    fu(i,0,n){
        cin >> a[i];
    }
		int t=INT_MIN;
		int k=0;
		int l=0;
    fd(i,n-1,0){
		if(a[i]!=a[n-1]){
			t=i;
			break;
		}


	}
// cout << t<< endl;
	k=n-t-1;
	l=t-k+1;

int c=0;
// cout << l << " " << l+k-1 << endl;
// cout << t << endl;
int m=0;
	while(t>=0 ){


fu(i,l,l+k){
	// cout << l << " " << l+k << endl;
	 if(i+k < n)
        a[i]=a[i+k];
}
// cout << a[3];

// cout << "ram";
// cout << t << endl;
int temp=t;
    fd(i,n-1,0){
		if(a[i]!=a[n-1]){
			t=i;
			break;
		}


	}
			c++;
	if(temp==t){
		break;
	}
	// cout << t << endl;

	
		k *=2;
		
			l=l-k;

	

	}

	cout << c << endl;






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
