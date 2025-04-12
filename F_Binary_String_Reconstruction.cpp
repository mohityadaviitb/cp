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
    ll a,b,c;
    cin >> a>>b>>c;

  string s;
if(a>0){
  for(ll i=0;i<a+1;i++){
    s+='0';
  }
}
else if(b!=0){

    s+='0';
    
}



  // cout<<s<<endl;

  for(ll i=0;i<(b-1)/2;i++){
    s+="10";
  }

  if(b==2){

  }
  // cout<<s<<endl;



  if(b%2!=0){
    if(c>0){
      for(ll i=0;i<c+1;i++){
        s+='1';
      }
    }
    else{
      s+='1';
    }
  }
  else{
    if(c>0){
    for(ll i=0;i<c+1;i++){
        s+='1';
      }
    }
    else if(b>0){
      s+='1';
    }
      if(b>0){
        s+='0';
      }
    
  }
cout<<s<<endl;
    
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
