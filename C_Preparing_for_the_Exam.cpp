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
                                                                                             
                                                                                             
void solve()
{

       ll n,m,k;
       cin>>n>>m>>k;
       vector<ll>vm(m);
       vector<ll>vq(k);
       for(auto &it:vm) cin>>it;
       for(auto &it:vq) cin>>it;
       string ans="",ans1="";
       for(ll i=0;i<m;++i){
           ans+="0";
           ans1+="1";
       }
       map<int,int>mp;
       for(auto it:vq){
           mp[it]++;
       }
       map<int,int>mp2;
       for(ll i=1;i<=n;++i){
           if(mp.find(i)==mp.end()){
               mp2[i]++;
           }
       
       if(mp2.size()==0){
           cout<<ans1<<endl;
           continue;
       }
       if(mp2.size()>1){
           cout<<ans<<endl;
           continue;
       }
       }
       for(auto it:mp2){
           ans[it.first-1]='1';
       }
       cout<<ans<<endl;
    }
  
          

                                                                                             
                                                                                             
                                                                                             
                                                                                             
int main()
{
    Code By Mohityadav
        ll tr;
    cin >> tr;
    while (tr--)
    {
        solve();
    }
    return 0;
}

