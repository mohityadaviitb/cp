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

    vector<ll> a;
    map<ll,ll> mpy;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        mpy[elm]=i;
        a.pb(elm);

    }

       vector<ll> b;
         vector<ll> ans(n,-1);
    fu(j, 0, n)
    {
        ll elm;
        cin >> elm;
      
        b.pb(elm);

    int i=mpy[elm];
    //   cout << i<<" ";

    if(j>=i){
        ans[j]=j-i;
    }
    else{
        ans[j]=n-i+j;
    }
    }
//    cout <<endl;

    for(ll i=0;i<n;i++){
        // cout << ans[i]<<" ";
    }
    // cout <<endl;


    sort(ans.begin(),ans.end());

    map<ll,ll> mp;

    for(ll i=0;i<n;i++){
        mp[ans[i]]++;
    }

    ll mx=INT_MIN;
 

    for(auto i : mp){
        if(i.second>mx){
            mx=i.second;
           
        }
    }

    cout << mx<<endl;
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
