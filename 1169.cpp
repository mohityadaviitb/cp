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
bool isPowerOfTwo( ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
bool allarrsame( ll arr[], ll size) {for( ll i = 1;i<size;++i){if(arr[i]!=arr[0]){return false;}}return true;}
template <class T> bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template <class T> bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
ll nooftimes( ll arr[],  ll size,  ll element) { ll count = 0;for ( ll i = 0; i < size; i++) { if (arr[i] == element) {count++;}}return count;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0; ll base = 1; ll len = num.length();for( ll i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll stringtoint(string s){return stoi(s);}
string inttostring(ll n){return to_string(n);}
string decToBinary( ll n){string s=""; ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}



// #define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

ll mostFrequentElement(const std::vector<ll>& vec) {
    std::unordered_map<ll, ll> frequencyMap;

    // Count the occurrences of each element
    for (ll num : vec) {
        frequencyMap[num]++;
    }

    // Find the element with the highest frequency
    ll mostFrequent = vec[0];
    ll maxCount = 0;
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    return mostFrequent;
}


void solve()
{
  	ll n,k;
	cin >> n>>k;
    
	vector <ll>v;
    fu(i,0,n){
		ll elm;
         cin >> elm;
		 v.pb(elm);
    }
    ll r=0;
fu(i,0,n){
    if(v[i]>r){
        r=v[i];
    }
}

// ll z= mostFrequentElement(v);
ll mini=INT_MAX;

fu(j,1,r){
    ll z=j;
dbg(z);

ll s=0;
ll e=0;
ll m=0;
ll y=0;

    fu(i,0,n){

    if(i==n-1 && v[i] != z){
        m++;
        break;
    }

    if(v[i] != z && y==0){
        s=i;
        y++;
    }
    if(y!=0 && (v[i] ==z || i==n-1)){
       m+= (i-s)/k;
         y=0;
       if((i-s)%k!=0){
        m++;
      
       }
    }
dbg(i);
    dbg(m);
}
mini = min(mini,m);

}


cout << mini<<endl;






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
