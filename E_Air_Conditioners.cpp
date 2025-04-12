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

    vector<pair<ll,ll> > a;
    //  set<ll> as;
    fu(i, 0, k)
    {
        ll elm;
        cin >> elm;
        a.pb(make_pair(elm-1,-1));
        // as.insert(elm);
    }

   
    fu(i, 0, k)
    {
        ll elm;
        cin >> elm;
        a[i].second=elm;
    }

sort(a.begin(),a.end());

    vector<ll> l(n,INT_MAX);
    vector<ll> r(n,INT_MAX);
    ll j=0;

    ll p=10000000000000;

    for(ll i=0;i<n;i++){

  if(j<0 || j>=k){
            p++;
        }

      else if(a[j].first==i){
        
        p=min(p+1,a[j].second);
          j++;


      }
      else{
        p++;
      }
      l[i]=p;
      
    }

    j=k-1;
    p=1000000000000000;



//     for(ll i=0;i<n;i++){
 
//     cout<<l[i]<<" ";
// }

// cout<<endl;


     for(ll i=n-1;i>=0;i--){

        if(j<0 || j>=k){
            p++;
        }

      else if(a[j].first==i){


        p=min(p+1,a[j].second);
        
          j--;


      }
      else{
        p++;
      }
      r[i]=p;
      
    }


//         for(ll i=0;i<n;i++){
//     cout<<l[i]<<" ";
// }

// cout<<endl;

//        for(ll i=0;i<n;i++){
 
//     cout<<r[i]<<" ";
// }

// cout<<endl;

vector<ll> ans(n,-1);

for(ll i=0;i<n;i++){
    ans[i]=min(l[i],r[i]);
    cout<<ans[i]<<" ";
}

cout<<endl;

    
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
