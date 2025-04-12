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
    ll n,k;
    cin >> n>>k;
    ll st=0;
    ll e=0;

    string s;
    cin >> s;
    ll nl=0;

for(ll i=0;i<n;i++){
    if(s[i]=='L'){
        nl++;
    }
}
ll answer=0;
if(n==nl){
    if(n==1 && k>0){
        answer=1;
        cout <<answer<<endl;
        return;
    }
    else if(n==1 && k==0){
            answer=0;
            cout <<answer<<endl;
        return;
    }
    else{
        answer=2*min(n,k);
            answer-=1;
            if(answer<0){
                cout << 0<<endl;
                return;
            }
            else{
  cout <<answer<<endl;
        return;
            }

      
         
    }

}


    for(ll i=0;i<n;i++){
        if(s[i]=='W' || i==n-1){
            st=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='W'){
            e=n-1-i;
            break;
        }
    }




if(s[0]=='W' ){
    answer=1;
}



for(ll i=1;i<n;i++){
    if(s[i]=='W' && s[i-1]=='W'){
        answer+=2;
    }
    else if(s[i]=='W'){
        answer++;
    }
}

// cout<<answer<<"r"<<endl;
// cout << st<<e<<endl;
    
    ll i=st;
    ll j=st+1;
    vector<ll> ans;

    // cout << i<<" "<<j<<endl;


while(i<=n-1-e && j<=n-1-e){
    // cout << i << " "<<j<<endl;
    while(s[j]=='L'){
        // cout <<"ram"<<endl;
        j++;
    }
    if(j-i-1!=0){
  ans.push_back(j-i-1);
    }
  
    i=j;
    j++;
}

for(ll i=0;i<ans.size();i++){
// cout <<ans[i]<<" ";
}

sort(ans.begin(),ans.end());
// if(st!=0){
// ans.push_back(st);
// }
// if(e!=0){
// ans.push_back(e);
// }

// cout <<endl;

// cout << k <<endl;
for(ll i=0;i<ans.size();i++){

if(k<=0){
    break;
}

 
    if(k-ans[i]>=0){
        answer+=2*ans[i];
        answer++;
        k-=ans[i];
    }
    else{
        answer+=k*2;
         k-=ans[i];
    }
    //    cout << k <<" r"<<ans[i]<<" "<<answer<<endl;
}


// cout<<answer<<endl;



if(k-st-e>0){
    answer+=st+e+st+e;
}
else{
    if(k>0){
     answer+=k*2;
    }

}


cout <<answer<<endl;
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
