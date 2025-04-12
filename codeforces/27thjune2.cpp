#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define sor(v)  sort(v.begin(), v.end()); 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define cm cout<<"-1\n";
#define ce cout<<"\n";
#define pi 3.141592653589793238
#define pll pair<ll, ll>
using namespace std;
typedef vector<ll> vll;

// #define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif



void solve()
{
string a;
string b;

cin >> a >> b;

ll n=a.length();
ll m=b.length();

ll y=-1;


ll ans=0;
ll t=INT_MIN;
ans=t;

fu(k,y+1,m){
dbg(ans);
ll x=0;
ll z=0;

fu(j,0,m){
    fu(i,0,n){
        if(a[i]==b[j]){
            x=i;
            y=j;
            z++;
            // dbg(x)
            // dbg(y)
            break;
        }
    }
    if(z!=0){
 break;
    }
   
}

dbg(x);
dbg(y);
dbg(z)
if(z!=0){
fu(j,y+1,m){
    fu(i,x+1,n){
        if(a[i]==b[j]){
            z++;
          
            ans=z;
        
          break;
        }
        else if(i==n-1){
            ans=z;
        }
    }

}
}
dbg(x)
dbg(y)
dbg(z)
ans=max(ans,z);
}
dbg(ans);
cout << n+m-ans<<endl;







	

}      
 






















 int main()
{
	Code By Mohityadav
	ll ttt;
	cin >> ttt;
	while (ttt--)
	{
		solve();
	}
	return 0;
}
