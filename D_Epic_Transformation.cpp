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
    ll n;
    cin >> n;

    map<ll,ll> mp;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
      
        mp[elm]++;
    }

for(auto i : mp){
    v.push_back(i.second);
}

sort(v.begin(),v.end(),greater<ll>());

n=v.size();
v.push_back(0);
v.push_back(0);
v.push_back(0);
v.push_back(0);

ll l=0;
ll r=1;

for(ll i=0;i<n;i++){
    cout << v[i]<<" ";
}
cout << endl;

while(l<=n-1 &&  r<=n-1){
    cout << l << " "<< r<< " " <<v[l]<<" "<<v[r]<<endl;
    if(v[l]>v[r]){
        v[l]-=v[r];
        v[r]=0;
        r++;
    }
    else if(v[l]==v[r]){
             v[l]=0;
          v[r]=0;
        l=r+1;
    
        r=l+1;

    }
    else{
        v[r]-=v[l];
        v[l]=0;
        l=r;
        r=l+1;
    }
    
}

for(ll i=0;i<n;i++){
    cout << v[i]<<" ";
}
          
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