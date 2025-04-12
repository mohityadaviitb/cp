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
    ll n,a,b;
    cin >> n>>a>>b;

    if(a==1){
        if((n-1)%b==0){
              cout<<"Yes"<<endl;
                 return;
        }
        else{
   cout<<"No"<<endl;
   return;
        }
    }


    for(ll i=0;i<50;i++){
        ll p =pow(a,i);
        if(p>n) break;
        // cout<<p<<endl;
// cout<<p<<endl;
        if((n-p)%b==0){
            cout<<"Yes"<<endl;
            return;
        }
    }

       cout<<"No"<<endl;

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
