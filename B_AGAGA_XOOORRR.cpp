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
    fu(i, 0, n){
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
    ll s = v[0];
    for (ll i = 1; i < n; i++){
        s = s ^ v[i];
    }
    if (s == 0){
        cout << "YES" << endl;
        return;
    }

    // ll i = 0;
    ll j = 0;
    ll t = 0;
    ll p=0;
    while (j < n)
    {
      
        if(t != s){
            t = t ^ v[j];
            j++;
        }
          else{
            // i = j;
            // j++;
            t = 0;
            p++;
            if(p==2) break;
        }
    }

// cout<< j<<endl;

if(j==n){
      cout<<"NO"<<endl;
      return;
}

    while(j<n){
        t = t ^ v[j];
        j++;
    }
    if(t == s ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    Code By Mohityadav
        ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
