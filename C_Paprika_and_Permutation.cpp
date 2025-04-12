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

    vector<int> v;
    fu(i, 0, n)
    {
        int elm;
        cin >> elm;
        v.pb(elm);
    }

    sort(v.begin(), v.end());
    int t = 0;
    vector<int> temp;
    vector<int> s;
    set<int> st;
    for (int i = 0; i < n - 1; i++)
    {

        if (v[i] > n || v[i] == v[i + 1])
        {
            temp.push_back(v[i]);
        } 
        else {
            st.insert(v[i]);
        }
    }
    if (v[n - 1] > n)
    {
        temp.push_back(v[n - 1]);
    }
    else st.insert(v[n - 1]);

    for(int i = 1; i <= n; i++) {
        if(st.find(i) == st.end()) {
            s.push_back(i);
        }
    }


    ll ti = 0;


    for (auto i : s)
    {
        // cout << (i>=double(temp[ti]/2.0))<<endl;
        if (temp[ti] < 2 * i + 1)
        {
            // cout << "a"<<ti<<endl;
            cout << -1 << endl;
            return;
        }
        else
        {
            ti++;
        }
    }

    cout << temp.size() << endl;
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
