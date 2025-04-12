#include <bits/stdc++.h>
// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
// #define commented // Un-Comment this before submission
// #ifndef commented
// #define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
// #else
// #define dbg(v)
// #endif

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        a.pb(elm); 
    }
       vector<ll> b;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        b.pb(elm); 
    }
    ll t=0;

       vector<ll> ans(n,0);
       for(ll i=0;i<n;i++){
        ans[i]=a[i]-b[i];
        if(ans[i]<0){
            t++;
        }

  
       }
             sort(ans.begin(),ans.end());
      if(t>=2){
        cout << "NO"<<endl;
      }

      else{
      
        if(abs(ans[0])>ans[1]){
  cout << "NO"<<endl;
        }
        else{
              cout << "YES"<<endl;
        }
       
      }
       
}

int main()
{
    // Code By Mohityadav
        ll t;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
