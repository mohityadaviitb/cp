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

   string a;
   string b;
   cin >> a>>b;

   ll ao=0;
   ll ae=0;
   ll bo=0;
   ll be=0;

   for(ll i=1;i<=n;i++){
    if(i%2==0 && a[i-1]=='1'){
            ae++;
    }
    else if(i%2!=0 && a[i-1]=='1'){
        ao++;
}
   }



   for(ll i=1;i<=n;i++){
    if(i%2==0 && b[i-1]=='0'){
            be++;
    }
    else if(i%2!=0 && b[i-1]=='0'){
        bo++;
}
   }

// cout<<ao<<ae<<bo<<be<<endl;
   if(ao<=be && ae<=bo){
    cout<<"YES"<<endl;

   }
   else{
    cout<<"NO"<<endl;
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
