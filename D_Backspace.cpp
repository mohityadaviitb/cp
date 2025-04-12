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
   string s,t;

   cin >> s>>t;

   ll ns=s.length();
   ll nt=t.length();

   ll i=ns-1;
   ll j=nt-1;


while(i>=0 && j>=0){
   
    if(s[i]==t[j]){
        i--;
        j--;
        continue;
    }
    else{
        if(i>=1){
i-=2;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    //  cout<<i<<j<<endl;
}

if(j<0){
      cout<<"YES"<<endl;
}
else if(i<0){
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
