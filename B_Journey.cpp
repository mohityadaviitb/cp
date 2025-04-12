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
#define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
#else
#define dbg(v)
#endif
                                                                                             
                                                                                             
// void solve()
// {
//     ll n,a,b,c;
//     cin >> n>>a>>b>>c;

//     ll sum=a+b+c;

//     ll cycle=n/sum;
//     ll days=cycle*3;
//     ll tsum=cycle*sum;


//     if(tsum>=n){
//         cout << days<<endl;
//         return;
//     }
//     else{
             
//         if(tsum+a>=n){
//             cout << days+1 <<endl;
//             return;
//         }
     
//        else{
//         cout << days+2<<endl;
//         return;
//        }
     
     
    

//     }
    
          
// }
                                                                                             
                                                                                             
                                                                                             






void solve(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll tsum = a+b+c;
    ll days = (n/tsum);
    tsum = (days*tsum);
    days  = days*3;
    if(tsum>=n){
        cout<<days<<"\n";
        return;
    } 
    days+=1;
    tsum=tsum+a;
    if(tsum>=n){
        cout<<days<<"\n";
        return;
    }
    days++;
    tsum+=b;
    if(tsum>=n){
        cout<<days<<"\n";
        return;
    }
    cout<<(days+1)<<"\n";
}


                                                                                             
int main()
{
    Code By Mohityadav
        ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
