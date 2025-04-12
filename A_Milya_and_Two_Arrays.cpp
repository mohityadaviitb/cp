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

void solvefn()
{
    ll number;
    cin >> number;

    vector<ll> veca;
    map<ll,ll>mapa;
     map<ll,ll>mapb;
    for(ll i=0;i<number;i++)
    {
        ll elm;
        cin >> elm;
        veca.pb(elm);
        mapa[elm]++;
    }

     vector<ll> vecb;
    for(ll i=0;i<number;i++)
    {
        ll elm;
        cin >> elm;
        vecb.pb(elm);
        mapb[elm]++;
    }

    if(mapa.size()*mapb.size()>=3){
        cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
    
}

int main()
{
    Code By Mohityadav
        ll tst=1;
        cin >> tst;
    while (tst--)
    {
        solvefn();
    }
    return 0;
}
