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
   string s;
   cin >>s;

   ll n=s.length();
   map<char,ll> mp;

   for(ll i=0;i<n;i++){
    mp[s[i]]++;
   }
   ll mx=INT_MIN;
   ll sx=INT_MIN;
   ll mxv;
   ll sxv;

   

   for(auto i : mp){
    if(i.second>mx){
        mx=i.second;
        mxv=i.first-'0';
    }
   }

   for(auto i : mp){
    if(i.second>sx && (i.first-'0')!=mxv){
        sx=i.second;
        sxv=i.first-'0';
    }
   }

   string t="";

   for(ll i=0;i<n/2;i++){
        string temp = to_string(mxv)+ to_string(sxv);
        t+=temp;
   }

 
cout<<n<<endl;

   ll ans=0;

   if(n%2==1){
      ans=n-mx;
      if(mx==1){
        cout<<n-2<<endl;
      }
      else{
        cout<<ans<<endl;
      }
   }
   else{    

    
    


    ll j=0;

        for(ll i=0;i<n;i++){
            if(s[i]==t[j]){
                j++;
                continue;
            }
            else{
                ans++;
            }
        }

        cout<<ans<<endl;
   }

    
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
