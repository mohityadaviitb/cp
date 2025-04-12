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

bool check(ll i,ll n,ll x){
    return (i+x<n) && (i+x>=0);
}

void solve(ll t)
{

    string w;
    cin >>w;
    ll n=w.size();

    ll x;
    cin >> x;
 vector<ll> s(n,1);

    for(ll i=0;i<n;i++){
        if(w[i]=='0'){
            // cout<<i<<" a ";
            if(check(i,n,-x)){
                s[i-x]=0;
            }
            if(check(i,n,x)){
                s[i+x]=0;
            }
        }
    }


    // if(t==1000-6){
    //     cout<<" r ";
    //     cout<<w;
    //     cout<<" r "<<x;
    //     cout<<endl;
    // }

// cout<<endl;
    for(ll i=0;i<n;i++){
        if(w[i]=='1'){
            if((check(i,n,x) && s[i+x]==0) && (check(i,n,-x)  && s[i-x]==0)){
               cout<<-1<<endl;
               return;
            }
            else if(check(i,n,x) && !check(i,n,-x)){
                if(s[i+x]==0){
                    cout<<-1<<endl;
                    return;
                }
             }
             else if(!check(i,n,x) && check(i,n,-x)){
                if(s[i-x]==0){
                    cout<<-1<<endl;
                    return;
                }
             }
             else if(!check(i,n,x) && !check(i,n,-x)){
            
                    cout<<-1<<endl;
                    return;
                
             }
        }
    }


    for(ll i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    

//     vector<ll> ans(n);

// cout<<endl;
//     for(ll i=0;i<n;i++){
//         if(i-x>=0 && s[i-x]==1 || i+x<n && s[i+x]==1){
//             ans[i]=1;
//         }
//         else{
//             ans[i]=0;
//         }
//         cout<<ans[i];
//     }








}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}
