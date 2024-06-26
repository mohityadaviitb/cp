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
void printvec(const vector<ll>& v) {for (ll i = 0; i < v.size(); ++i) {cout << v[i] << " ";}cout << "\n";}
bool isPrime( ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for( ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}




void solve()
{
  	ll x;
	cin >> x;

    ll nt = ceil(log10(x));

ll v[nt];
ll w[nt];

    fd(i,nt-1,0){
        v[i]=x%10;
        x /=10;
    }


    fu(i,0,nt){
        w[i]=0;
    }

ll m=0;

 ll i=nt-1;
 while(i>=0){
    if(i==0 && v[i] ==0){
        break;
    }
  
 
    if(v[i]>9 && v[i]<=18){
        i--;
    }
    else if(i!=0 && w[i] ==0){
        w[i]=1;
        v[i] += 10;
        v[i-1] -=1;

     if(v[i]>9 && v[i]<=18){
        i--;
    }
      else{
        m=-1;
        break;
    }

    }
    else{
        m=-1;
        break;
    }
 }

if(m==0){
    cy;
}
else{
    cn;
}






}      
 






















 int main()
{
	Code By Mohityadav
	ll testw;
	cin >> testw;
	while (testw--)
	{
		solve();
	}
	return 0;
}
