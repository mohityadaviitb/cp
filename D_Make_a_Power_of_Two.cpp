#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define sor(v) sort(v.begin(), v.end())
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define cm cout << "-1\n"
#define ce cout << "\n"
#define pi 3.141592653589793238
#define pll pair<ll, ll>
#define pstr pair<string, string>
using namespace std;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef unordered_map<ll, ll> umll;


















void solve(){
    int t;
    cin >> t;
    string s= to_string(t);

    vector<string> v(32,"");

    for(int i=0;i<32;i++){
        int m=pow(2,i);
        v[i] = to_string(m);
    }

    int ans=INT_MAX;

    for(int i=0;i<32;i++){
        int z=0;

        int j=0;
        int k=0;

        while(j<s.size() && k<v[i].size()){
            if(s[j]==v[i][k]){
                j++;
                k++;
                continue;
            }
            else{
                z++;
                j++;
            }
        }

        while(j<s.size()){
            z++;
            j++;
        }
        while(k<v[i].size()){
            z++;
            
        }

    }





}
















int main()
{
	Code By Mohityadav
		ll t=1;
	while (t--)
	{
		solve();
	}
	return 0;
}
