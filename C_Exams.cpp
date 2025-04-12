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

  
     vector<pair<ll,ll> > b;
    fu(i, 0, n)
    {
        ll ai;
        cin >> ai;
          ll bi;
        cin >> bi;
        b.pb(make_pair(ai,bi));
    }

    sort(b.begin(),b.end());

    ll t=b[0].second;


    for(ll i=0;i<n;i++){
        // cout <<b[i].first<<" "<<b[i].second<<endl;
    }

       for(ll i=0;i<n;i++){
        // cout <<b[i].first<<" "<<b[i].second<<endl;
    }

    for(ll i=1;i<n;i++){
        if(b[i].second>=t){
            t=b[i].second;
        }
        else{
            t=b[i].first;
        }

        // cout <<t<<endl;
    }

    cout << t<<endl;

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
