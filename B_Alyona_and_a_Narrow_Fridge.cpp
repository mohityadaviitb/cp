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



bool f(ll mid, vector<ll> &v,ll h){
    vector<ll> a;

    for(ll i=0;i<=mid;i++){
        a.push_back(v[i]);
    }

    sort(a.begin(),a.end());

    ll th=0;

    for(ll i=mid;i>=0;i--){
        th+=a[i];
        i--;
    }
// cout <<endl<< "r "<<th<<" "<<h<<endl;
    if(th<=h){
        return true;
    }
    else{
        return false;
    }


}




void solve()
{
    ll n,h;
    cin >> n>>h;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }


    ll l=0;
    ll r=n-1;
    ll ans=0;

    while(l<=r){
        ll mid=(l+r)/2;
// cout << l << " " <<r<<" "<<mid<<" "<< f(mid,v,h)<<endl;
        if(f(mid,v,h)){
             ans=mid;
            l=mid+1;
        }
        else if(!f(mid,v,h)){
            r=mid-1;
        }
     

     
    }

cout << ans+1<<endl;

}

int main()
{
    Code By Mohityadav
        ll t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
