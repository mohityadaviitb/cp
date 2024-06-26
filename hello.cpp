#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
//bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
//	for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
//}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--){
        ll n,m; 
        cin>>n>>m; 
        string s,c; 
        vector<ll>ind(m);
        cin>>s; 
        fi(i,0,m){
            cin>>ind[i];
        }
        cin>>c;
        set<ll>st; 
        fi(i,0,m){
            st.insert(ind[i]);
        } 
        vector<ll>arr; 
        for(auto& val: st){
            arr.push_back(val);
        }
        sort(arr.begin(),arr.end());
        sort(c.begin(),c.end());
        ll len = arr.size();
        ll k =0;
        string sol = "";
        ll r=0;
        fi(i,0,s.length()){
            if(r<len &&i==arr[r]-1){
                sol+=c[k++]; 
                r++; 
            }
            else{
                sol+=s[i];  
            }
        }   
        cout<<sol<<endl;
    }
    return 0;
}