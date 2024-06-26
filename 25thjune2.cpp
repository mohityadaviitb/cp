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



#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif






void solve()
{
ll x,y,k;

cin >> x >> y >>k;
ll ram=1;

while(k>0 &&ram<10000000){
    ram++;
    float m = static_cast<float>(x) / y;

ll n=ceil(m);
dbg(n)
ll z=n*y;
dbg(z)
dbg(x)
dbg(k)

if(z==x){
    x++;
    k--;
    continue;
}

if(z-x<=k){
    k-=z-x;
    x=z;
    while(x%y==0){
        x/=y;
    }
    
}
else{
    x+=k;
    break;
}

}

cout << x << endl;



}      
 






















 int main()
{
	Code By Mohityadav
	ll temp;
	cin >> temp;
	while (temp--)
	{
		solve();
	}
	return 0;
}
