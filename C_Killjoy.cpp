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
    ll n,x;
    cin >> n>>x;
    ll sum=0;
    bool ch=false;
    bool vn=false;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        sum+=elm;
        if(elm!=x){     
                ch=true;
        }
        else{
            vn=true;
        }
    }


// if(t==96){
//     cout<<n<<"a" <<x;

//     for(ll i=0;i<n;i++){
//         cout<<v[i]<<"b";
//     }

// }


    if(!ch){
        cout<<0<<endl;
    }
    else{
        if(x*n==sum || vn){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    


    
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
