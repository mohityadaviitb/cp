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
    ll n;
    cin >> n;

    vector<vector<ll> > v;
   vector<pair<ll,ll> > mx;
    vector<pair<ll,ll> > mf;
    fu(i, 0, n)
    {
        ll t;
        cin >> t;
        vector<ll> temp;
          ll mxvl=INT_MIN;
        for(ll j=0;j<t;j++){
              ll elm;
        cin >> elm;
              temp.pb(elm+1-j);
            mxvl = max(mxvl,elm-j);
        }
        v.push_back(temp);
        mx.push_back(make_pair(mxvl,i));
        // mf.push_back(make_pair(mxvl+t,i));
        // mxvl=INT_MIN;


      
    }


sort(mx.begin(),mx.end());



for(int i=0;i<n;i++){
    // cout << mx[i].first<<" ";
}

// cout <<endl;




ll mk=mx[0].first;

ll temp = 0;
for(int i=1;i<n;i++){
    temp+=v[mx[i-1].second].size();
    mk=max(mk,mx[i].first-temp);
        // cout << temp<<" ";

}

cout << mk+1<<endl;


//     ll ansmx=INT_MIN;
//     ll iansmx =-1;

// for(int i=0;i<n;i++){
// //    cout << mx[i]<<" "<<mf[i].first<<endl;
//    if(ansmx<mx[i].first){
//     ansmx=mx[i].first;
//     iansmx=i;
//    }
// }


// ll ans;

// sort(mf.begin(),mf.end());

// for(int i=0;i<n;i++){

//     if(i==n-1){
//         ans = ansmx;
//         break;
//     }
//     if(mf[i].first>=ansmx){
//         ans=mx[mf[i].second].first;
//         // cout << " ram "<< mx[mf[i].second]<<endl;
//         break;
//     }
   
// }

// cout << ans<<endl;
// cout <<endl;

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
