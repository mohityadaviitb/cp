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
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
    ll ans=0;

    sort(v.begin(),v.end(),greater<ll>());


    ll i=0;
    ll j=2;
    
    while(i<n-1 && j<n){
        // if(v[i]>v[j] && v[i-1]>v[j]){
        // swap(v[i-1],v[j]);
        // i=i+2;
        // j=max(j+1,i+2);
        // }
        // else if(v[i-1]==v[j]){

            while(j<n-1 && v[i+1]==v[j]){
                j++;
            }

            swap(v[i+1],v[j]);
            i=i+2;
            j=max(j+1,i+2);
        // }
        // else if(v[i]==v[j] && v[i-1]==v[j]){

        //     while(v[i-1]==v[j]){
        //         j++;
        //     }

        //     swap(v[i-1],v[j]);
        //     i=i+2;
        //     j++;
        // }
        ans++;

    }


 cout<<ans<<endl;


    
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


}

int main()
{
    Code By Mohityadav
        ll t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
