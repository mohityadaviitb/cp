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

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        ll nm;
        cin >> nm;
    
    
    
        vector<ll> b;
        fu(i, 0, nm-2)
        {
            ll elm;
            cin >> elm;
            b.pb(elm);
        }
        bool br=true;
    
        for(ll i=0;i<nm-4;i++){
            if(b[i]==1 && b[i+1]==0 && b[i+2]==1){
              
                br=false;
               break;
            }
        }
    if(br){
        cout<<"YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    
    }
    return 0;
}
