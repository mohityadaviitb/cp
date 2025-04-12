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
   string str;
   cin >> str;
   ll n=str.length();
   ll sum=0;
   ll tw=0;
   ll th=0;
//    vector<ll> m = {0,1,4,9};

   for(ll i=0;i<n;i++){
        sum+=(str[i]-'0');
        if(s[i]=='2'){
            tw++;
        }
        else if(s[i]=='3'){
            th++;
        }
   }
      ll t =  sum%9;   
     if(t==0){
                cout << "YES"<<endl;
                return;
            }



if(t==1){
    if(tw>=1 && th>=1){
           cout << "YES"<<endl;
           return;
    }
}

if(t==2){
    if((tw>=2 && th>=2) || (tw>=8 && th>=0) || (tw>=5 && th>=1)){
           cout << "YES"<<endl;
                      return;

    }
}

if(t==4){
    if( (tw>=7 && th>=0) || (tw>=1 && th>=2) || (tw>=4 && th>=1)){
           cout << "YES"<<endl;
                      return;

    }
}

if(t==3){
    if((tw>=0 && th>=1) || (tw>=3 && th>=0) ){
           cout << "YES"<<endl;
                      return;

    }
}

if(t==5){
    if((tw>=2 && th>=0) ){
           cout << "YES"<<endl;
                      return;


    }
}


if(t==6){
    if((tw>=0 && th>=2) || (tw>=3 && th>=1) || (tw>=6 && th>=0)){
           cout << "YES"<<endl;
                      return;

    }
}


if(t==7){
    if((tw>=1 && th>=0) ){
           cout << "YES"<<endl;
                      return;

    }
}

if(t==8){
    if((tw>=2 && th>=1) || (tw>=5 && th>=0) ){
           cout << "YES"<<endl;
                      return;

    }
}











//    for(ll i=0;i<n;i++){
//     if(s[i]-'0'<=3){
       
//             ll r=s[i]-'0';
//             if((sum-r+r*r)%9==0){
//                 cout << "YES"<<endl;
//                 return;
//             }
        
//     }
//    }
   cout << "NO"<<endl;
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
