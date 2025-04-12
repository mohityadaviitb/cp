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


bool compareByLength(ll a, ll b) {
    int x = 0, y = 0;

    while (a % 10 == 0 && a != 0) {
        x++;
        a /= 10;
    }

    while (b % 10 == 0 && b != 0) {
        y++;
        b /= 10;
    }

    return x > y;
}


void solve()
{
    ll n,m;
    cin >> n>>m;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    sort(v.begin(), v.end(), compareByLength);


 fu(i, 0, n)
    {
    //    cout << v[i]<<" ";
    }

// cout << endl;


ll ans=0;

for(ll i=0;i<n;i++){
    if(i%2==0){
        int t=0;
        while(v[i] % 10 == 0 && v[i]!=0){
            t++;
            v[i]/=10;
        }
        ans+=log10(v[i])+1;
    }
    else{
        ans+=log10(v[i])+1;
    }

    // cout << ans <<endl;
}


if(ans>m){
    cout << "Sasha"<<endl;
}
else{
     cout << "Anna"<<endl;
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
