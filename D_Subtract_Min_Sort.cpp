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
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        a.pb(elm);

        
    }


    bool my=true;

    for(ll i=0;i<n-1;i++){
        ll t=min(a[i],a[i+1]);
        a[i]-=t;
        a[i+1]-=t;

        if(a[i]>a[i+1]){
            my=false;
            break;
        }
    }

    if(my){
        cout << "YES"<<endl;
    }
    else{
           cout << "NO"<<endl;
    }


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
