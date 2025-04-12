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
#define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
#else
#define dbg(v)
#endif
                                                                                             
                                                                                             
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll> > v;
    map<ll,ll> mp;
    map<ll,ll> mpc;

    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
         ll c;
        cin >> c;
        v.pb(make_pair(elm,c));
        if(c==1){
            mpc[elm]++;
        }
        mp[elm]++;
    }
vector<ll> ans;
    for(auto i: mp){
        if(i.second==mpc[i.first] && v[i.first-1].second==1){
            ans.push_back(i.first);
        }
    }
 
    for(ll i=1;i<=n;i++){
        if(mp[i]==0 && v[i-1].second==1){
               ans.push_back(i);
        }
    }

    sort(ans.begin(),ans.end());
if(ans.size()==0){
    cout << -1 ;
}
    for(auto i : ans){
        cout << i<<" ";
    }
cout <<endl;

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