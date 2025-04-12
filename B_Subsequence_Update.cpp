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
    ll n,l,r;
    cin >> n>>l>>r;


    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

      vector<ll> a;
      ll x=0;
    fu(i, 0, r)
    {
       
        a.pb(v[i]);
    }

    sort(a.begin(),a.end());


      vector<ll> b;
      ll y=0;
    fu(i, l-1, n)
    {
       
        b.pb(v[i]);
    }

    sort(a.begin(),a.end());
        sort(b.begin(),b.end());


for(ll i=0;i<r-l+1;i++){
    x+=a[i];
}

for(ll i=0;i<r-l+1;i++){
    y+=b[i];
}

cout << min(x,y)<<endl;

//       vector<ll> a;
//     fu(i, 0, l)
//     {
       
//         a.pb(v[i]);
//     }


//   vector<ll> b;
//     fu(i, l, r+1)
//     {
       
//         b.pb(v[i]);
//     }



//   vector<ll> d;
//     fu(i, l, r+1)
//     {
       
//         d.pb(v[i]);
//     }

//       vector<ll> c;
//     fu(i, r+1, n)
//     {
       
//         c.pb(v[i]);
//     }


//     ll ans=0;


//     sort(a.begin(),a.end());
//      sort(b.begin(),b.end(),greater<ll>());
//       sort(c.begin(),c.end());


// ll m=0;
// ll t=0;
// ll i=0;


// while(i<a.size() && i<b.size()){
//     m+=min(a[i],b[i]);
//     i++;
  
// }

// while(i<a.size()){
//     m+=a[i];
//     i++;
// }

// while(i<b.size()){
//     m+=b[i];
//     i++;
// }


// i=0;




// while(i<c.size() && i<b.size()){
//     t+=min(c[i],b[i]);
//     i++;
// }

// while(i<c.size()){
//     t+=c[i];
//     i++;
// }

// while(i<b.size()){
//     t+=b[i];
//     i++;
// }





// // cout << m <<" "<<t<<endl;







// cout << min(m,t)<<endl;


      

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
