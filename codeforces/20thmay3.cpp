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




string removeDuplicates(string s, int n)
{
    unordered_map<char, int> exists;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (exists.find(s[i]) == exists.end()) {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}




int binarySearch(const std::string &str, char target) {
    int left = 0;
    int right = str.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (str[mid] == target) {
            return mid; // Target found at index mid
        } else if (str[mid] < target) {
            left = mid + 1; // Continue search in the right half
        } else {
            right = mid - 1; // Continue search in the left half
        }
    }

    return -1; // Target not found
}


void solve()
{

        ll no;
        cin >> no;
        string st;
        cin >> st;

    ll x=0;
    ll y=0;
    int t=0;
    int a=0;
    int b=0;

    string z="";
    ll ra=0;
    char m[2] ={ 'R','H'};
    ll n=0;
    ll s=0;
    ll e=1;
    ll w=1;

        fu(i,0,no){
            if(st[i]=='N'){
                if(abs(y)%2==0){
                   z+=m[n];
                   n=1-n;
                }
                else {
                 z+=m[n];
                   n=1-n;
                }
                    y++;

            }

            else if(st[i]=='S'){
                 if(abs(y)%2==0){
                 z += m[s];
                   s=1-s;
                }
                else {
                  z+=m[s];
                   s=1-s;
                }
                    y--;

            }

            else if(st[i]=='E'){
                 if(abs(x)%2==0){
                    z+=m[e];
                   e=1-e;
                }
                else {
                   z+=m[e];
                   e=1-e;
                }
                    x++;

            }

            else if(st[i]=='W' ){
                 if(abs(x)%2==0){
                 z+=m[w];
                   w=1-w;
                }
                else {
                    z+=m[w];
                   w=1-w;
                }
                    x--;

            }
        }

        // cout << "x" << x << "y"<<y<<endl;
ll p=0;
ll q=0;

        fu(i,0,no){
            if(z[i]=='R'){
                p++;
            }
        }
        fu(i,0,no){
            if(z[i]=='H'){
                q++;
            }
        }
// cout << p <<" "<< q <<endl;
    //  cout <<endl<<  z << endl;

        if((abs(x)%2==0 && abs(y)%2==0) && p!=0 && q!=0){
                    cout <<endl<<  z << endl;
        }
        else{
            cout << "NO"<< endl;
         }

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
