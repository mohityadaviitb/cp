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
    ll n,m;
    cin >> n>>m;
    ll amn=1;
    ll amx=INT_MIN;
    ll bmn=INT_MAX;
    ll bmx = INT_MIN;


    ll ax=n-1;
    ll bx=0;



    vector<ll> a;
       a.pb(1);

    fu(i, 0, n-1)
    {
        ll elm;
        cin >> elm;
        amx=max(amx,elm);
        a.pb(elm);

    }
    vector<ll> b;
    fu(i, 0, n)
    {
    
        ll elm;
        
        cin >> elm;
            bmn = min(bmn,elm);
            bmx = max(bmx,elm);
        b.pb(elm);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    // ll ans=0;
    // ll t=0;

    // for(ll i=0;i<n;i++){
        
    //     if(b[i]<=1){
    //        ans++;
    //     }
    //     else{
    //         break;
    //     }
    // }

    //  for(ll i=0;i<n;i++){
        
    //     if(a[i]<bmx){
    //        continue;
    //     }
    //     else{
    //         ans=max(ans,n-1-i);
    //         break;
    //     }
    // }


    // cout << ans<<endl;

ll i=0;
ll j=0;
ll ans=0;

while(i<=ax && j<n){

   

    if(a[i]<b[j]){
        i++;
        j++;
        continue;
    }
    else{
        //  cout << i << " " << j<<endl;
        j++;
        bx++;
        ax--;
        ans++;

        
    }
   
}

cout << ans<<endl;


    


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
