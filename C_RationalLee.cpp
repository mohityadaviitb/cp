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
    ll n,k;
    cin >> n>>k;

    vector<ll> a;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        a.pb(elm);

        
    }
    ll ans=0;

        sort(a.begin(),a.end());

       vector<ll> w;
    fu(i, 0, k)
    {
        ll elm;
           cin >> elm;
        if(elm==1){
              ans+=2*a[n-1];
            a.pop_back();
            n--;
            k--;
            i--;
          
        }

        else{
     
        w.pb(elm);
        }


        
    }


     sort(w.begin(),w.end());



for(ll i=0;i<k;i++){
    ans+=a[i];
    ans+=a[n-1-i];
}
    cout <<ans<<endl;
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
