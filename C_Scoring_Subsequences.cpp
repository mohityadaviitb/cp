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
    ll mxl=INT_MIN;



// for(int i=n-1;i>=0;i--){
//     v[i] = v[i]/(n-i);
    
// }

for(int i=0;i<n;i++){
    int l=0;
    int r=i;
    ll t=i;

ll fr = i;


    while(l<=r){
   
        ll mid = (l+r)/2;
                //  cout << "t"<<l<<" " <<r << " " << mid<<" " <<v[mid]<<endl;
        if(v[mid]/(fr-mid+1)>1){
             t=mid;
            r=mid-1;
        }
        else if(v[mid]/(fr-mid+1)<1){
            l=mid+1;
        }
        else{
            t=mid;
            r=mid-1;
        }

    }
    // cout << endl;
    // cout <<"r"<< t<<endl;
    cout << i-t+1<<" ";


}
cout << endl;

}

int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;

    vector<ll> fac;
        
    while (t--)
    {
        solve();
    }
    return 0;
}
