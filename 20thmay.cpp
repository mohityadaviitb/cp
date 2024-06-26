#include <bits/stdc++.h>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()
#define sorr(v) sort(v,v+n),
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define pi 3.141592653589793238
#define ll long long int
void printarr(ll arr[], ll n){fu(i, 0, n) cout << arr[i] << " ";cout << "\n";}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
bool allarrsame(int arr[],int size) {for(int i = 1;i<size;++i){if(arr[i]!=arr[0]){return false;}}return true;}
int nooftimes(int arr[], int size, int element) {int count = 0;for (int i = 0; i < size; i++) { if (arr[i] == element) {count++;}}return count;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll stringtoint(string s){return stoi(s);}
string inttostring(ll n){return to_string(n);}
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}








void solve()
{
	ll x,y;
    cin >> x>>y;

    int s=0;



if(y%2==0){
              s = y/2;
              if(x>7*s){
                if((x-7*s)%15==0){

                      s += (x-7*s)/15;
                    //   cout << "a"<<
                }
                else{
                      s += (x-7*s)/15;
                      s++;
                }
              
              }
           
    }
    else{
          s = y/2;
          s++;
              if(x>7*(s-1)+11){
                if((x-7*(s-1)-11)%15==0){

                      s += (x-7*(s-1)-11)/15;
                }
                else{
                      s += (x-7*(s-1)-11)/15;
                      s++;
                }
              
              }
         
    }

  
cout << s <<endl;
    

}      
 






















int main()
{
	Code By Mohityadav
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
