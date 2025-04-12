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



#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif



// An iterative binary search function.
ll binarySearch(ll arr[], ll low, ll high, ll x)
{
    while (low <= high) {
        ll mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}



void solve()
{
  	ll n;
	cin >> n;
    
	vector <ll>v;
    ll t[n];
    fu(i,0,n){
		ll elm;
         cin >> elm;
		 v.pb(elm);
        

    }

    vector <ll>w;
    w.pb(v[0]);
    fu(i,1,n){

        ll elem=w[i-1]+v[i];
         w.pb(elem);
      
    }

    fu(i,0,n){
        // cout << w[i]<<" ";
    }
    ce;
	
  set <ll >sttt;
    ll mm=0;

    fu(i,0,n){
    //     t[i]=v[i];
    //    sort(t,t+i);
     
       sttt.insert(v[i]);
    //     for (const auto& element : st) {
    //     std::cout << element << ' ';
    // }
    // std::cout << '\n';
    // cout <<"ram"<<endl;
      
       if (sttt.find(w[i]/2) != sttt.end() && w[i]%2==0){




       
        // dbg(st.find(w[i]/2) != st.end());
            // dbg(binarySearch(t,0,i,w[i]/2));
            mm++;
            dbg(i);
        }


    }

    cout << mm <<endl;




}      
 


//  #include <iostream>
// #include <set>

// int main() {
//     // Create a set of long long integers and add some elements
//     std::set<long long> treeSet = {5, 1, 3, 2, 4};

//     // Display the elements of the set
//     std::cout << "Elements in the set: ";
//     for (const auto& element : treeSet) {
//         std::cout << element << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }


// ll f()
// {

//     // Create a set of long long integers
//     std::set<long long> treeSet;

//     // Add elements to the set using insert method
//     treeSet.insert(5);
//     treeSet.insert(1);
//     treeSet.insert(3);
//     treeSet.insert(2);
//     treeSet.insert(4);

//     // Attempt to add a duplicate element
//     auto result = treeSet.insert(3);
//     if (!result.second) {
//         std::cout << "Element 3 is already in the set." << std::endl;
//     }

//     // Display the elements of the set
//     std::cout << "Elements in the set: ";
//     for (const auto& element : treeSet) {
//         std::cout << element << " ";
//     }
//     std::cout << std::endl;

//     return 0;


// }




// #include <iostream>
// #include <unordered_set>
// #include <set>

// int main() {
//     // Example with std::unordered_set
//     std::unordered_set<long long> hashSet = {1, 2, 3, 4, 5};
//     long long searchElement = 3;

//     if (hashSet.find(searchElement) != hashSet.end()) {
//         std::cout << "Element found in unordered_set." << std::endl;
//     } else {
//         std::cout << "Element not found in unordered_set." << std::endl;
//     }

//     // Example with std::set
//     std::set<long long> treeSet = {1, 2, 3, 4, 5};

//     if (treeSet.find(searchElement) != treeSet.end()) {
//         std::cout << "Element found in set." << std::endl;
//     } else {
//         std::cout << "Element not found in set." << std::endl;
//     }

//     return 0;
// }











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
