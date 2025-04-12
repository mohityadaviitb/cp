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
    ll k,x;
    cin >> k>>x;



    ll l=1;
    ll r= k*(k+1)/2;
    ll fr = r;
    ll ans=0;

if(r>x){

        while(l<=r){
        ll mid = (l+r)/2;
        if(x>mid){
            l=mid+1;
        }
        else if(x<mid){
            r=mid-1;
        }
        else{
            ans=mid;
            break;
        }
    }

}
else{
    ans=k;
    x-=r;
    
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
