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

    vector<ll> k;
    vector<ll> c;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        k.pb(elm-1);
    }
       fu(i, 0, m)
    {
        ll elm;
        cin >> elm;
        c.pb(elm);
    }

sort(k.begin(),k.end(),greater<ll>());

ll t=0;
ll s=0;

    for(ll i=0;i<n;i++){
        // cout << c[k[i]]<<" "<<c[t]<<endl;
        if(c[k[i]]<c[t]){
            s+=c[k[i]];
            //    cout << i <<" "<< t<<" " <<c[k[i]]<<" h"<<endl; 
        }
        else{
            //   cout << i <<" "<< t<<" " <<c[t]<<" m"<<endl; 
            s+=c[t];
            t++;
                  
        }
    }

cout << s<<endl;

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
