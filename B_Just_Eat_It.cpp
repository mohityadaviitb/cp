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

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
// cout << v[2]<<endl;
    ll psum=0;
    for(int i=0;i<n;i++){
            psum+=v[i];
            // cout << psum<<endl;

            if(psum<=0){
                // cout <<psum << "NO"<<i<<endl;
                    cout << "NO"<<endl;
                return;
            }
    }


    ll ssum=0;
    for(int i=n-1;i>=0;i--){
            ssum+=v[i];

            if(ssum<=0){
                cout << "NO"<<endl;
                return;
            }
    }

cout << "YES"<<endl;

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
