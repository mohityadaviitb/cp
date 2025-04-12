#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fo for (ll i(0); i < n; i++)
#define fd(i, a, b) for (ll i(a-1); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()




void solve()
{
	  ll n, k;
    cin >> n >> k;
ll m=n;
    vector<ll> a(n);
    fd(i, n, 0) {
        cin >> a[i];
    }

    vector<ll> b(k);
    fu(i, 0, k) {
        cin >> b[i];
    }
 
int z=0;
   
    fu(j, 0, k) {
         int r = 0;
        fd(i, n, 0) {
            r++;
            if(a[i]==0){
                r--;
                //    cout << "r"<< r<< "r"<< i<<endl;
               
                continue;
            }
            // cout << i<< " "<<a[i] <<" " << b[j]<<endl;
            if (a[i] == b[j]) {
                // cout  << "r"<< r  << "r";
                z = r;
            //  cout <<"z"<<z << "z" <<a[z] <<"r";
                a.pb(a[i]);
                  a[i] = 0;
                  n++;
                   break;
            }
           
        }

         cout << z <<" ";
    }


}      
 






















int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t=1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
