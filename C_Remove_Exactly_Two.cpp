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

    vector<vector<ll> > g(n);

    // Read edges
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;

        g[u - 1].push_back(v - 1); // Convert to 0-based indexing
        g[v - 1].push_back(u - 1);
    }

    ll mx = INT_MIN;
    ll mxv = -1;

    // Find the vertex with the maximum degree
    for (ll i = 0; i < n; i++) {
        if ((ll)g[i].size() > mx) {
            mx = (ll)g[i].size();
            mxv = i;
        }
    }

    ll answer = mx;
    vector<vector<ll > > m(n);


    // cout <<answer<<endl;
    // cout << mxv<<endl;


    for (int i = 0; i < n; i++) {
        if(i==mxv){
            continue;
        }
      for(ll j=0;j<(ll)g[i].size();j++){
      
            if((ll)g[i][j]!=mxv){
                //   cout <<i<<" "<< g[i][j]<<" ";
                        m[i].push_back(g[i][j]);

   
            }
      }
        // cout <<endl;
    }




for(ll i=0;i<n;i++){
    for(ll j=0;j<m[i].size();j++){
        // cout << m[i][j]<<" ";
    }
    // cout <<endl;
}



    mx=INT_MIN;
    mxv = -1;

        for(ll i=0;i<n;i++){
        if ((ll)m[i].size() > mx) {
            mx = (ll)m[i].size();
            mxv=i;
        }
    }

    answer += mx-1;
    // cout << mxv<<" r"<<endl;

    cout <<answer<<endl;




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
