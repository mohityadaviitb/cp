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
    ll n,k;
    cin >> n>>k;

  string s;
  cin >> s;

  ll ans=0;

  for(ll i=0;i<(k+1)/2;i++){
    map<char,ll> mp;
    for(ll j=0;j<n/k;j++){


        if(k%2!=0 && i==(k+1)/2-1){
            mp[s[i+j*k]]++;
        }
        else{
           
        mp[s[i+j*k]]++;
        mp[s[k-i-1+j*k]]++;
        }
       

    }

   
    ll mx=INT_MIN;

    // cout<<mp.size()<<endl;

    for(auto i : mp){
        mx=max(i.second,mx);
    }
    ll y;
    if(k%2!=0 && i==(k+1)/2-1){
        y=-mx+(n/k);
    }
    else{
         y=-mx+2*(n/k);
    }
   
    // cout<<mx<<" " << y<<endl;
    ans+=y;
  }
    
  cout<<ans<<endl;
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
