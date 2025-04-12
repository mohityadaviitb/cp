#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back
#define MODE 1000000007
#define pi 3.141592653589793238
#define pll pair<ll, ll>
#define pstr pair<string, string>
using namespace std;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef unordered_map<ll, ll> umll;

#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        a.pb(elm);
    }

     vector<ll> b;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        b.pb(elm);
    }

     vector<ll> d;
     ll mx=INT_MIN;
     for(int i=0;i<n;i++){
        d.pb(a[i]-b[i]);
        mx=max(mx,d[i]);
     }
     set<ll> st;
     for(int i=0;i<n;i++){
        if(mx==d[i]){
            st.insert(i);
        }
     }




   cout << st.size()<<endl;
   for(auto it : st){
    cout << it+1<<" ";
   }
   cout << endl;



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
