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


ll myf(  vector <pair<ll,ll> > &v,ll n,ll t){
    ll l=0;
    ll r=n-1;
   ll ans=-1;

    while(l<=r){
            ll mid=(l+r)/2;
        // cout << l <<' '<< r << " " << v[mid].first<< " "<< t<<endl;
   

        if(v[mid].first>t){
            
            r=mid-1;
        }
        else if(v[mid].first<t){
            l=mid+1;
        }
        else{
            ans=mid;
            return ans;
        }

    }
    
return ans;

}








void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;

    vector<pair<ll,ll> > v;
    ll sum=0;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        sum+=elm;
        v.pb(make_pair(elm,i));
    }


    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++){
        ll t = sum-v[i].first;
         if(t%2!=0){
        continue;
    }
    t /=2;
    // cout << myf(v,n,t)<<" " << v[i].second <<endl;

    if(myf(v,n,t)!=-1){
        if(myf(v,n,t)==i){
            if(v[i-1].first==v[i].first || v[i+1].first==v[i].first){
                  ans.push_back(v[i].second+1);
            }
        }
        else{
  ans.push_back(v[i].second+1);
        }
      
    }


    }

    cout << ans.size()<<endl;

    for(auto i : ans){
        cout << i << " ";
    }
   cout << endl;



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
