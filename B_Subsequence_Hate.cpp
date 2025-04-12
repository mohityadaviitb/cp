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
  

    string s;
    cin >>s;
    ll n= s.length();
    ll a=0,b=0;
    vector<ll> c(n,-1);
      vector<ll> d(n,-1);
       vector<ll> bc(n+1,-1);
        vector<ll> bd(n+1,-1);
        bc[n]=0;
        bd[n]=0;


    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            a++;
        }
        else{
            b++;
        }
        c[i]=a;
        d[i]=b;
    }

    a=0;
    b=0;
        for(ll i=n-1;i>=0;i--){
        if(s[i]=='0'){
            a++;
        }
        else{
            b++;
        }
        bc[i]=a;
        bd[i]=b;
    }

    // for(ll i=0;i<n;i++){
    //     cout << c[i]<<" ";
    // }
    // cout <<endl;

    //     for(ll i=0;i<n;i++){
    //     cout << d[i]<<" ";
    // }
    // cout <<endl;

    //     for(ll i=0;i<n;i++){
    //     cout << bc[i]<<" ";
    // }
    // cout <<endl;

    //     for(ll i=0;i<n;i++){
    //     cout << bd[i]<<" ";
    // }
    // cout <<endl;

ll ans=min(a,b);

    for(ll i=0;i<n;i++){
        ll t = c[i]+bd[i+1];
        ll u= d[i]+bc[i+1];
        t=min(t,u);
        ans=min(ans,t);
    }
cout <<ans<<endl;
}


// 10100000

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
