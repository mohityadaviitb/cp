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

ll a=0;
ll b=0;
ll c=0;

for(ll i=0;i<n;i++){
    if(i<n-2 && (s[i]=='A' &&  s[i+1]=='B' &&  s[i+2]=='A') || (s[i]=='B' &&  s[i+1]=='A' &&  s[i+2]=='B')){
        c++;
        i+=2;
     }
   else if(i<n-1 && s[i]=='A' &&  s[i+1]=='B'){
a++;
    }
 
  



}
for(ll i=0;i<n;i++){
    if(i<n-2 && (s[i]=='A' &&  s[i+1]=='B' &&  s[i+2]=='A') || (s[i]=='B' &&  s[i+1]=='A' &&  s[i+2]=='B')){
        // c++;
        i+=2;
     }
   else if(i<n-1 && s[i]=='B' &&  s[i+1]=='A'){
        b++;
    }
}

// a-=c;


// cout<<a<<b<<c<<endl;
// b-=c;

// if((a>=1 || c>=1) ){
//     c--;
//     if(b>=1 || c>=1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
  
// }
// else{
//     cout<<"NO"<<endl;
// }


if(a==0){
    a=max(a,c);
    c--;
}
if(b==0){
    b=max(b,c);
}

if(a>=1 && b>=1){
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
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
