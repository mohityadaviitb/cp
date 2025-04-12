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
    ll m,k;
    cin >> m>>k;

    vector<ll> w;
    fu(i, 0, m)
    {
        ll elm;
        cin >> elm;
        w.pb(elm);
    }


    sort(w.begin(),w.end());
    ll sum=0;
    ll ans=0;

    for(int i=m-1;i>=0;i--){
        sum+=w[i];

        if(sum==k){
            ans=0;
            break;
        }

        if(sum>k){
            ans=w[i]-sum+k;
            break;
        }
        if(i==0 && sum<k){
            ans=k-sum;
        }
        
    }

    cout << ans<<endl;

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
