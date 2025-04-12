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
   
   string s;
   cin >>s;

    n= s.length();

    vector<ll> ans(n,0);
    ll t=0;

    for(ll i=1;i<n;i++){
        if(s[i-1]=='v' && s[i]== 'v'){
            ans[i]=1;
            t++;
        }
         if(s[i]=='o' ){
            ans[i] += t;
        }
    }
    int b=0;


    for(ll i=n-1;i>=0;i--){

              if(s[i]== 'v'){
           b+=ans[i];
        }

   
         if(s[i]=='o' ){
            ans[i] *= b;
        }
    }

    ll answer=0;


        for(ll i=n-1;i>=0;i--){

   
         if(s[i]=='o' ){
            answer += ans[i];
        }
    }

    for(int i=0;i<n;i++){
      if(s[i]=='o' ){
        //   cout << ans[i]<<" ";
        }
}
// cout << endl;



cout << answer<<endl;




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
