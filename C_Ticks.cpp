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



bool check(ll i,ll j, ll n, ll m){
    return (i<n && j<m && i>=0 && j>=0);
}

void f(vector<vector<char> > &v,set<pair<ll,ll> > &s,ll k,ll i,ll j){
    ll n=v.size();
    ll m=v[0].size();

    ll ri=i;
    ll rj=j;

    ll c=1;

    // cout<<i-c<<" "<<j-c<<" "<<(check(i-c,j-c,n,m) &&   check(i-c,j+c,n,m))<<endl;

    while(check(i-c,j-c,n,m) &&   check(i-c,j+c,n,m)  && v[i-c][j-c] =='*' && v[i-c][j+c]=='*'){
            c++;
    }
    // cout<<c<<endl;
    c--;
    if(c>=k){
        // s.insert(make_pair(ri,rj));
           for(ll k=0;k<=c;k++){
            s.insert(make_pair(ri-k,rj-k));
            s.insert(make_pair(ri-k,rj+k));
           } 
    }
}



void solve()
{
    ll n,m,k;
    cin >> n>>m>>k;

    ll count=0;

    vector<vector<char> > v(n,vector<char> (m,'.'));
    fu(i, 0, n)
    {
        fu(j, 0, m)
        {
        char elm;
        cin >> elm;
      if(elm=='*'){
        v[i][j]=elm;
        count++;
      }
    }
}

set<pair<ll,ll> > s;


fu(i, 0, n)
{
    fu(j, 0, m)
    {
        if(v[i][j]=='*'){
            f(v,s,k,i,j);
            // cout<<i<<" " <<j<<" "<<s.size()<<endl;
          }
}
}

// cout<<s.size()<<endl;

if(s.size()==count){
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
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
