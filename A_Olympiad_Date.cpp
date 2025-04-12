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

    ll a=3;
    ll b=1;
    ll c=2;
    ll d=1;
    ll e=1;
    

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);

    }

    for(ll i=0;i<n;i++){
        if(v[i]==0 && a>0){
            a--;
        }  
        else  if(v[i]==1 && b>0){
            b--;
        }
       else if(v[i]==2 && c>0){
            c--;
        }
       else  if(v[i]==3 && d>0){
            d--;
        }
       else if(v[i]==5 && e>0){
            e--;
        }
        if(a+b+c+d+e==0){
            cout<<i+1<<endl;
            return;
        }
    }

cout<<0<<endl;
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
