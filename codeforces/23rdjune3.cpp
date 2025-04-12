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




void removeDuplicates(vector<ll>& vec) {
    sort(vec.begin(), vec.end());

    auto last = std::unique(vec.begin(), vec.end());

    vec.erase(last, vec.end());
}

void solve()
{

ll nrr,mrr;
cin>> nrr >> mrr;

string stt;
cin >> stt;

vector <ll>ver;
    fu(i,0,mrr){
		ll e;
         cin >> e;
		 ver.pb(e-1);
    }

    string c;
    cin >> c;

     sort(c.begin(), c.end());


     sor(ver);
 removeDuplicates(ver);



     fu(i,0,ver.size()){
        stt[ver[i]]=c[i];
       
     }

cout << stt <<endl;
}
 






















 int main()
{
	Code By Mohityadav
	ll tr;
	cin >> tr;
	while (tr--)
	{
		solve();
	}
	return 0;
}
