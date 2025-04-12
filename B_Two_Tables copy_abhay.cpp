#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
#define sort_arr(arr) sort(arr.begin(), arr.end())
#define rsort_arr(arr) sort(arr.begin(), arr.end(), greater<ll>())
ll MOD = 1e9+7;
//bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
//	for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
//}
void solve(){
    ll W,H;
    cin>>W>>H;
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll w2,h2; 
    cin>>w2>>h2; 
    ll w1 = x2-x1, h1 = y2-y1;                //width and height of first table
    if(w1>W || w2>W ||h1>H || h2>H){         // if any dimension larger than room dimension, then -1
        cout<<-1<<"\n";  
        return;  
    } 
    if(w1+w2>W){              // means can't fit side by side (only up and down possible)
        if(h1+h2>H){  
            cout<<-1<<"\n";  
            return;  
        }   
        if(y1>=h2){
            cout<<0<<"\n";
            return;
        }  
        if(H-y2>=h2){
            cout<<0<<"\n";
            return;
        }   
        double diff_from_bottom = h2-y1, diff_from_top = h2-(H-y2);
        cout<<min(diff_from_bottom,diff_from_top)<<"\n";
        return;
    }  
    if(h1+h2>H){                            // can't fit up and down, only side by side possible
        if(x1>=w2){
            cout<<0<<"\n";
            return;
        }
        if(W-x2>=w2){
            cout<<0<<"\n";
            return;
        }
        double diff_from_left = w2-x1, diff_from_right = w2-(W-x2);
        cout<<min(diff_from_left,diff_from_right)<<"\n";
        return; 
    } 
    if(x1>=w2 || W-x2>=w2 || y1>=h2 || H-y2>=h2){               // can check this in starting as well.. but okay
        cout<<0<<"\n";
    }  
    else{
        double dist_from_left = w2-x1, dist_from_right = (w2-(W-x2)), dist_from_bottom = h2-y1, dist_from_top = h2-(H-y2);
        cout<<min(dist_from_bottom, min(dist_from_top, min(dist_from_left, dist_from_right)));
    } 
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}