#include <bits/stdc++.h>
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
	ll n,k;
	cin >> n >> k;

    vector <pair<int,int> >a;

    fu(i,0,n){
        int m;
        cin >> m;
        a.push_back(make_pair(m,i));
    }

sort(a.begin(), a.end());
    
     fu(i,0,n){
        // cout << a[i].first <<" " << a[i].second<<endl;
     }

    ll t=0;
    fu(i,0,n-1){
       if(a[i].second != a[i+1].second - 1){
            t++;
       } 
    }
// cout << "t" << t;
    if(t<=k-1){
        cout << "YES"<< endl;
    }
    else{
           cout << "NO"<< endl;
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
