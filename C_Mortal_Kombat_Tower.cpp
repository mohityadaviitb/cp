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

void solve(ll t)
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


    ll ans=0;

 
  

for(ll i=1;i<n;i++){
    if(v[i]==1){
        ll t=i;
        while(v[i]==1 && i<n){
            i++;
        }
        ans+=(i-t)/3;
    }
}

if(v[0]==1){
    ans++;
}


// if(t==20000-76 && ans==3){
//     fu(i, 0, n)
//     {
//        cout<<v[i]<< "r";
//     }
// }


    cout <<ans<<endl;
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}
