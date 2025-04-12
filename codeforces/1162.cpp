#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define sor(v) sort(v.begin(), v.end())
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define cm cout << "-1\n"
#define ce cout << "\n"
#define pi 3.141592653589793238
#define pll pair<ll, ll>
#define pstr pair<string, string>
using namespace std;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef unordered_map<ll, ll> umll;
void printvec(const vector<ll> &v)
{
	for (ll i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
}
bool isPrime(ll n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (ll i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}
bool isPowerOfTwo(ll n)
{
	if (n == 0)
		return false;
	return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
	if (x >= 0)
	{
		ll sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}
bool allarrsame(ll arr[], ll size)
{
	for (ll i = 1; i < size; ++i)
	{
		if (arr[i] != arr[0])
		{
			return false;
		}
	}
	return true;
}
template <class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template <class T>
bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
ll nooftimes(ll arr[], ll size, ll element)
{
	ll count = 0;
	for (ll i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			count++;
		}
	}
	return count;
}
ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
ll binaryToDecimal(string n)
{
	string num = n;
	ll dec_value = 0;
	ll base = 1;
	ll len = num.length();
	for (ll i = len - 1; i >= 0; i--)
	{
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}
	return dec_value;
}
ll powermod(ll x, ll y, ll p)
{
	ll res = 1;
	x = x % p;
	if (x == 0)
		return 0;
	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}
ll stringtoint(string s) { return stoi(s); }
string inttostring(ll n) { return to_string(n); }
string decToBinary(ll n)
{
	string s = "";
	ll i = 0;
	while (n > 0)
	{
		s = to_string(n % 2) + s;
		n = n / 2;
		i++;
	}
	return s;
}

#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

bool isPalindrome(const std::string &str)
{
	int left = 0;
	int right = str.length() - 1;

	while (left < right)
	{
		if (str[left] != str[right])
		{
			return false;
		}
		left++;
		right--;
	}

	return true;
}
































void solve()
{
	ll n, m;
	cin >> n >> m;

	vector<string> v;
	vector<pstr> w;


	fu(i, 0, n)
	{
		string elm;
		cin >> elm;
		v.pb(elm);
	}


	ll count = 0;
	fu(i, 0, n)
	{
		string s = v[i];
		reverse(s.begin(), s.end());

		fu(j, 0, n)
		{
			if (s == v[j] && j!=i)
			{

				pstr ps;

				ps.first = v[i];
				ps.second = s;
				w.pb(ps);
				count++;
					v[j]=".*";
				break;
			}
		}
	}
ll z=0;









	fu(i, 0, n)
	{
		string s = v[i];

		if (isPalindrome(s))
		{
			pstr ps;
			ps.first = v[i];
			ps.second = "";
			w.pb(ps);
			count++;
			z++;
			break;
		}
	}

	dbg(z);






string st;

fu(i,0,count){
	st += w[i].first;
}
dbg(count);
dbg(z);

fd(i,count-z-1,0){
	
	st += w[i].second;
}


cout <<st.length()<<endl;

cout << st<<endl;





	fu(i, 0, count)
	{
		// cout << w[i].first <<" "<<w[i].second << endl;
	}
}





















int main()
{
	Code By Mohityadav
		ll t=1;
	while (t--)
	{
		solve();
	}
	return 0;
}
