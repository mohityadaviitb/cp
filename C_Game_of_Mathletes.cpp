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


    map<ll,ll> mp;

    // vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
       mp[elm]++; 
    }

ll ans=0;
// ll no=0;
//  ll z=0;

for(auto i : mp){

    if(i.second==-1){
        continue;
    }
   

    if(i.first==k-i.first){
        ans+=mp[(i.first)]/2;
        // no+=(i.first)%2;
         mp[k-i.first]=-1;
        continue;
    }

    ans+=min(i.second,mp[k-i.first]);
    // no+=max(i.second,mp[k-i.first])-min(i.second,mp[k-i.first]);
    // if(max(i.second,mp[k-i.first])-min(i.second,mp[k-i.first])==0){
    //     z++;
    // }
    mp[k-i.first]=-1;

    // cout << ans<<endl;
}

// if(no%2!=0){
//     ans-=z;

// }
cout << ans<<endl;
// cout << endl;


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
