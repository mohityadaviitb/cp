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

#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<int> w;
    fu(i, 0, n)
    {
        int elm;
        cin >> elm;
        w.pb(elm);
    }

    string s;
    cin >> s;
    bool ans = true;

    vector<pair<int, char> > v;

    for (int i = 0; i < n; i++)
    {
        pair<int, char> p = make_pair(w[i], s[i]);
        v.push_back(p);
    }

    sort(v.begin(), v.end());
    vector<pair<int, char> > temp;

      if (v[0].first <1 || v[0].first > n)
    {
        temp.push_back(v[0]);
    }

    for (int i = 1; i < n; i++)
    {

        if (v[i].first <1 || v[i].first > n || v[i].first == v[i - 1].first)
        {
            temp.push_back(v[i]);
        }
    }
  

    ll ti = 0;
    ll t = 0;
    ll idx = 0;
    set<int> st;

    // for(int i=0;i<n;i++){
    //    cout << v[i].first<<" "<<v[i].second<<endl;
    // }
    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        if(idx<n-1){
  if (v[idx].first == v[idx + 1].first || v[idx].first<=0)
        {
            //    cout << idx<<" aa  "<<v[idx].first<<endl;
            idx++;
            i--;
            continue;
        }
        }
      

        // cout << i<<" "<<v[idx].first<<endl;
       
        if ( idx<=n-1 && i + 1 == v[idx].first)
        {
            idx++;
            continue;
        }
        else
        {
            // cout << i << "ram";
            st.insert(i + 1);
        }
    }

    // cout << "set"<<endl;

    // for (auto i : st)
    // {
    //     cout << i << endl;
    // }

    // cout << "set" << endl;

    // cout << "temp"<<endl;

    // for (auto i : temp)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout << "temp";

    if(!s.empty()){
    for (auto i : st)
    {
        //     // cout << (i>=double(temp[ti]/2.0))<<endl;
        if (i < temp[ti].first && temp[ti].second != 'B')
        {
            ans = false;
        }
        else if (i > temp[ti].first && temp[ti].second != 'R')
        {
            ans = false;
        }
        ti++;
    }
    }

    if(ans==0){
        cout << "NO"<<endl;
    }
    else{
             cout << "YES"<<endl;
    }
    // cout << ans << endl;
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
