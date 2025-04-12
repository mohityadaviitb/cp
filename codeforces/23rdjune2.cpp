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



bool isAccessible(int row, int col, int maxRow, int maxCol) {

// dbg(row);
// dbg(col);
// dbg(maxRow);
// dbg(maxCol);

    return row >= 0 && row < maxRow && col >= 0 && col < maxCol;
}




void solve()
{


    ll n,m;
    cin >> n >>m;

    ll a[n][m];

    fu(i,0,n){
        fu(j,0,m){
            cin >> a[i][j];
        }
    }



    int dirRow[] = {-1, 1, 0, 0};
    int dirCol[] = {0, 0, -1, 1};




     fu(i,0,n){
        fu(j,0,m){


//    int  i=1;
//    int  j=1;

ll z=0;
ll mm=INT_MIN;

                 for (int k = 0; k < 4; ++k) { // Loop through all four possible directions
                int newRow = i + dirRow[k];
                int newCol = j + dirCol[k];


//    int newRow = 0;
//                 int newCol = 1;
//    dbg(isAccessible(newRow, newCol, n, m));
                if (isAccessible(newRow, newCol, n, m)) {
       
                    if(a[i][j]>a[newRow][newCol]){
                         z++;
                         mm=max(mm,a[newRow][newCol]);
                        //  dbg(mm);
                    }
                  
                }
                else{
                    z++;
                }
            }


            if(z==4 && mm!=INT_MIN){
                a[i][j]=mm;
            }


           
        }

     }


















            // if(i==0){
            //     if(a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]){
            //     ll m=max(a[i+1][j],max(a[i][j-1],a[i][j+1]));

            //     a[i][j]=m;
            // }
            // }

            //    if(j==0){
            //     if(a[i][j]>a[i+1][j]  && a[i][j]>a[i][j+1]){
            //     ll m=max(a[i+1][j],max(a[i][i-1],a[i][j+1]));

            //     a[i][j]=m;
            // }
            // }

            //    if(i==n-1){
            //     if( a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]){
            //     ll m=max(a[i-1][j],max(a[i][j-1],a[i][j+1]));

            //     a[i][j]=m;
            // }
            // }

            //    if(j==m-1){
            //     if(a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1]){
            //     ll m=max(a[i+1][j],max(a[i][j-1],a[i][i-1]));
            //     a[i][j]=m;
            // }
            // }


            //     if(n==1){
            //     if(a[i][j]>a[i][j-1]){
            //     ll m=max(a[i][j-1],a[i][i-1]);
            //     a[i][j]=m;
            // }
            // }

           





    //        else if( (   || a[i][j]>a[i-1][j]) && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]){
    //             ll m=max(a[i-1][j],max(a[i+1][j],max(a[i][j-1],a[i][j+1])));

    //             a[i][j]=m;
    //         }
    //     }
    // }

     fu(i,0,n){
        fu(j,0,m){
            cout<< a[i][j] << " ";
        }
        cout << endl;
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
