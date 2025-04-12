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
    ll n,m;
    cin >> n>>m;

    vector<vector<ll> > v(n,vector<ll>(m,0));
    fu(i, 0, n)
    {
         fu(j, 0, m)
    {
        ll elm;
        cin >> elm;
       v[i][j]=elm;
    }
        
    }

    map<ll,ll> mp;

  fu(i, 0, n)
    {
         fu(j, 0, m)
    {
        mp[v[i][j]]=i;

    }
    }
vector<ll> ans;

for(ll i=0;i<n;i++){
    ans.push_back(mp[i]);
}



for(ll i=0;i<n;i++){
    // cout << ans[i]<<" ";
}
// cout <<endl;

for(ll i=0;i<m*n;i++){
    if(ans[i%n]==mp[i]){
        continue;
    }
    else{
        // cout << i << " " <<ans[i%n]<<" "<<mp[i]<<endl;
        cout <<-1<<endl;
        return;
    }
}


for(ll i=0;i<n;i++){
    cout << ans[i]+1<<" ";
}

cout <<endl;

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
