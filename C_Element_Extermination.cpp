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

    stack<ll> s;

    s.push(v[0]);

ll val=INT_MAX;
   for(ll i=1;i<n;i++){
       while(!s.empty()&& s.top()<v[i]){
        val=s.top();
        s.pop();
       }
       s.push(min(val,v[i]));
        
  
    }
if(s.size()==1){
    cout <<"YES"<<endl;
}
else{
    cout << "NO"<<endl;
}


//   while(!s.empty()){
//     cout << s.top()<<" ";
//     s.pop();
//   }

















    // ll i=0;
    // ll a = v[0];
    // while(i<n-1){

    //  if(v[i]<v[i+1]){
    //     continue;
    //  }
    //  else{

    //  }
    // }
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
