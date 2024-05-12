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
#include <algorithm>



bool is_reverse_sorted(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return std::is_sorted(reversed.begin(), reversed.end());
}


void solve()
{
	string s;
    cin >> s;

    ll n=s.length();
    s+=s[n-1];
    // cout <<s<<endl;
int m=0;
int count =0;
    fu(i,0,n){
     
     if(is_sorted(s.begin(), s.end())){
        count =1;
        break;
     }
   if (is_reverse_sorted(s)){
            count =2;
            break;
   }
       
// cout << i << n-1 << s[i-1] << s[i] << m << endl;
        if(s[i]=='0' && s[i+1]=='1' && m==0){
            while(s[i+2] =='1'){
                
                i++;
            }
            m=1;
            count ++;
            i++;
            // cout << "a" << i;
        }

        else if(i==n-1 && s[i-1] !=s[i] ){
            // cout << "b"<<i;
                count++;
        }

        else if(s[i] !=s[i+1]){
            count++;
            // cout << "c" << i;
        }
    }
if(count==0){
    count++;
}
	cout << count << endl;

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
