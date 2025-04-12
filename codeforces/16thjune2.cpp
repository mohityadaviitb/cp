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
typedef map<ll,ll> mll;
typedef unordered_map<ll,ll> umll;



#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif




void solve()
{
  ll n,a,b;
  cin >> n >> a >> b;



ll k=0;
ll z=0;


k=b-a;
k=min(k,min(n,b));
// for(k=0;k<=min(n,b);k++){
//     if(b-k+1==a){
//          z++;
//         break;
       
      dbg(k);
//     }
// }
// if(z==0){
//     k=min(n,b);
// }

dbg(z);
  dbg(k);

ll s=0;

if(b>a){
        s =k*(2*b+1-k)/2+(n-k)*a;

}
else{
    s= n*a;
}

    
cout << s<<endl;
	

}      
 






















 int main()
{
	Code By Mohityadav
	ll ts;
	cin >> ts;
	while (ts--)
	{
		solve();
	}
	return 0;
}























// #include <bits/stdc++.h>
// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define Mohityadav cout.tie(NULL);
// #define fu(i, a, b) for (ll i(a); i < b; i++)
// #define fd(i, a, b) for (ll i(a); i >= b; i--)
// #define ll long long int
// #define pb push_back
// #define MODE 1000000007
// #define sor(v)  sort(v.begin(), v.end()); 
// #define cy cout<<"YES\n";
// #define cn cout<<"NO\n";
// #define cm cout<<"-1\n";
// #define ce cout<<"\n";
// #define pi 3.141592653589793238
// #define pll pair<ll, ll>
// using namespace std;
// typedef vector<ll> vll;
// typedef map<ll,ll> mll;
// typedef unordered_map<ll,ll> umll;



// // #define commented // Un-Comment this before submission
// #ifndef commented
// #define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
// #else
// #define dbg(v)
// #endif




// void solve()
// {
//   ll n,a,b;
//   cin >> n >> a >> b;

//     // ll s=0;
// ll k=0;


// fu(i,0,min(n,b)+1){
//     if(b-i+1<=a){
//         k=i;
//         break;
//     }
// }
// dbg(k);
// // k--;


// //   for(ll k=0;k<=min(n,b);k++){

//         ll  s =k*(2*b+1-k)/2+(n-k)*a;
//         // s=max(temp,s);
// //   }
    
// cout << s<<endl;
	

// }      
 






















//  int main()
// {
// 	Code By Mohityadav
// 	ll ts;
// 	cin >> ts;
// 	while (ts--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }
