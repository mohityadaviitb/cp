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
  	ll arr,brr,crr;
    cin >> arr >> brr >>crr;

ll v[3];

v[0]=arr;
v[1]=brr;
v[2]=crr;


sort(v,v+3);

ll d=v[0];
ll e=v[1];
ll f=v[2];



dbg(d)
dbg(e)
dbg(f)

ll s=0;
while(d<e && s<5){
    d++;
    s++;
}

dbg(d)
dbg(e)
dbg(f)

while(d<f && s<5 && e<f){
    if(s<4){
          d++;
    e++;
    s++;
    s++;
    }
    else{
         e++;
    s++;
    }
  
}



while(s<5 ){
   if(s<5){
    d++;
    s++;
   }
    if(s<5){
    e++;
    s++;
   }
    if(s<5){
    f++;
    s++;
   }
  
}

dbg(d)
dbg(e)
dbg(f)

cout << d*e*f<< endl;


}      
 






















 int main()
{
	Code By Mohityadav
	ll tee;
	cin >> tee;
	while (tee--)
	{
		solve();
	}
	return 0;
}
