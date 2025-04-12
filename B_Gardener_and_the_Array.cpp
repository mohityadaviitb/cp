#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
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

    vector<vector<ll> > v;
    map<ll,ll> mp;
    fu(i, 0, n)
    {
        ll k;
        cin >> k;
        vector<ll> temp;
         fu(i, 0, k)
    {
        ll elm;
        cin >> elm;
        temp.pb(elm);
        mp[elm]++;
    }
    v.push_back(temp);

    }


for(ll i=0;i<n;i++){
    bool b=true;
    // cout << v[i].size();
     fu(j, 0, v[i].size())
    {

        // cout << v[i][j]<< " "<<mp[v[i][j]]<<endl;
        if(mp[v[i][j]]<2){
            b=false;
            break;
        }
    }

    if(b==true){
        cout << "Yes"<<endl;
       return;
    }

}

cout << "No"<<endl;
return;


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
