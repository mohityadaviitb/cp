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
    int n;
    cin >> n;

    vector<vector<int> > v(2,vector<int>(n,-1));

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            int y=0;
            cin >> y;
            v[i][j] = y;
        }
    }

    vector<int> a(n,-1);
    vector<int>b(n,-1);
    a[0]=v[0][0];
    b[0]=v[1][0];

    for(int i=1;i<n;i++){
        a[i] = a[i-1]+v[0][i];
        b[i] = b[i-1]+v[1][i];
    }

    // for(int i=0;i<n;i++){
    //     cout << a[i]<<" ";
    // }
    // cout << endl;
    // for(int i=0;i<n;i++){
    //     cout << b[i]<<" ";
    // }
    // cout << endl;

    int ans=a[n-1]-a[0];
    for(int i=1;i<n;i++){
        int s=INT_MAX;
        int s1=0,s2=0;
        s1= a[n-1]-a[i];
        s2= b[i-1];
        s=max(s1,s2);
        ans=min(ans,s);
    }
    cout << ans<<endl;
}

int main()
{
	Code By Mohityadav
int t=0;
cin >> t;
	while (t--)
	{
		solve();
		// cout << endl;
		// cout <<endl;
		// cout << endl;
		// cout << endl;
	}
	return 0;
}
