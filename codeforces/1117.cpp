#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()

int find_hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_hcf_array(int arr[], int n) {
    int hcf = arr[0];
    for (int i = 1; i < n; ++i) {
        hcf = find_hcf(hcf, arr[i]);
    }
    return hcf;
}


void solve()
{
	ll n;
    cin >> n;

    ll a[n];
    fu(i,0,n){
        cin >> a[i];
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
