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
 #include <string>


void solve()
{
	string s;
    cin >> s;

    int n=s.length();
int m=0;
int z=0;
    fu(i,0,n){
        if(s[i] !=s[0]){
                m=1;
                z=i;
                break;
        }
    }


    if(m==0){
        cout << "NO"  << endl;
    }
    else{
        cout << "YES" << endl;

    char temp = s[0];
    s[0]=s[z];
    s[z]=temp;


        cout << s << endl;
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
