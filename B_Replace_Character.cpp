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


  map<char,ll> mp;

  for(int i=0;i<n;i++){
    mp[s[i]]++;
  }

  char mxc;
  ll mx=-999999;
  char mnc;
  ll mn=99999;

  for(auto i : mp ){
    if(i.second>mx){
        mxc=i.first;
        mx=i.second;
    }
     if(i.second<=mn){
        mnc=i.first;
        mn=i.second;
    }
  }


  for(ll i=0;i<n;i++){
    if(s[i]==mnc){
        s[i]=mxc;
        break;
    }
  }
cout << s<<endl;
//   cout << mxc << " "<<mnc<<endl;

   

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
