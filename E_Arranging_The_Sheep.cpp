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

   string s;
   cin >> s;

   vector<ll> v;

   for(ll i=0;i<n;i++){
        if(s[i]=='*'){
            v.push_back(i);
        }
   }

if(v.size()==0){
    cout << 0<<endl;
    return;
}

   ll t=((v.size()+1)/2)-1;
//    cout << t<<endl;

   

ll idx=1; 
ll ans=0;
   for(ll i=t-1;i>=0;i--){

    ans+=v[t]-idx-v[i];
    idx++;
   }

// cout <<ans<<endl;

idx=1;
   for(ll i=t+1;i<v.size();i++){
   
      ans+=v[i]-v[t]-idx;
         idx++;
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
