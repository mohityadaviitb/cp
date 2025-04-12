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
    ll a[n];
    fu(i,1,n+1){
        cin >> a[i];
    }
int m=0;
    fu(i,1,n+1){
       
        // cout << a[a[4]] << endl<< a[a[a[4]]];
        if(a[a[i]]==i &&      a[i]==  a[a[a[i]]]){
            cout << 2 << endl;
                m++;
            break;
        
        }

       

         
    }
    if(m==0){
        
            cout << 3 << endl;
           
       
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
