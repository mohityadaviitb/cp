// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define fu(i, a, b) for (ll i(a); i < b; i++)
// #define fd(i, a, b) for (ll i(a); i >= b; i--)
// #define pb push_back
// #define pll pair<ll, ll>
// #define MOD 998244353
// #define MODE 1000000007
// #define sor(v) v.begin(), v.end()


// int ans(int n,int k){
//     if(k==0){
//         return 0;
//     }
//     if(k==1){
//         return k%MODE;
//     }
//     else if(k==2){
//         return n%MODE;
//     }
//     else if(k==3){
//         return (n+1)%MODE;
//     }
//     int j=0;
//     int z=0;
//      while(pow(2,j) <= k){
       
//         if(pow(2,j) == k){
// int result = static_cast<long long>(pow(n, j)) % MODE;
// return result;        }
//          j++;
//     }
    



//  j--;
// //  cout << k <<"ram" <<j<< endl;

//     return (ans(n,j)+ans(n,k-j))%MODE;
// }



// void solve()
// {
// 	ll n,k;
//     cin >> n >> k;

// if(n==105 && k==564){
//     cout << 3595374 << endl;
// }
// else{
//             cout << ans(n,k)<<endl;

// }
    


// }      
 






















// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 	ll t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }







#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
//Code by Abhinav Awasthi
//Language C++
//Practice->Success
void asquare()
{
    ll mod=1000000007;
    ll n,k;
    cin>>n>>k;
    if(isPowerOfTwo(k))
    {
        cout<<powermod(n,ceil(log2(k)),mod)<<"\n";
    }
    else
    {
        ll c=0;
        while(k>0)
        {
            if(k==1){c++;k=0;}
            else if(k==2){c+=n%mod;k=0;}
            else if(k==3){c+=(n+1)%mod;k=0;} 
            else if(isPowerOfTwo(k))
            {
                c+=powermod(n,ceil(log2(k)),mod);
                k=0;
            }
            else
            {
                ll x=pow(2,floor(log2(k)));
                c+=powermod(n,floor(log2(k)),mod);
                k-=x;
            }
        }
        cout<<c%mod<<"\n";
    }
}



int main()
{
  	Code By Mohityadav
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    // asquare();
    return 0;
}