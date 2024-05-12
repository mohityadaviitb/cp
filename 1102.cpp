// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
#define fo for (ll i(0); i < n; i++)
#define fu(i, a, n) for (ll i(a); i < n; i++)
#define fd(i, a, n) for (ll i(a); i >= n; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()
 
 

void solve()
{
	ll k,n,m;
	cin >> k >> n >> m;


ll a[n+m];
ll b[n];

int z=0;
fu(i,0, n){
    cin >> a[i];
    if(a[i]==0){
        z++;
    }

}

fu(i,0,m){
    cin >> b[i];
     if(a[i]==0){
        z++;

}  


fu(i,0,m){
  a[n+i] = b[i];
}  



}      
 
sort(a,a+n+m);

// cout << a[n+m-1] << z+k ;
if(a[n+m-1] <=z+k){
fu(i,0,m+n){
    cout << a[i] << " " ;
}
cout << endl;
}

else{
    cout << -1 << endl;
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
