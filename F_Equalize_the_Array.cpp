// #include <bits/stdc++.h>
// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define Mohityadav cout.tie(NULL);
// #define fu(i, a, b) for (ll i(a); i < b; i++)
// #define ll long long int
// #define pb push_back
// using namespace std;
// #define commented // Un-Comment this before submission
// #ifndef commented
// #define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
// #else
// #define dbg(v)
// #endif

// void solve()
// {
//     ll n;
//     cin >> n;

//     vector<ll> v;
//     map<ll,ll> mp;

//     fu(i, 0, n)
//     {
//         ll elm;
//         cin >> elm;
//         v.pb(elm);
//         mp[elm]++;
//     }

//     vector<pair<ll,ll> > m;
//     map<ll,ll> ff;
//     vector<pair<ll,ll> > final;

//     for(auto i : mp){
//         m.push_back(make_pair(i.second,i.first));
//         ff[i.second]++;
//     }

//     n=m.size();

//     sort(m.begin(),m.end());


// for(auto i : ff){
//     final.push_back(make_pair(i.second,i.first));

// }




// sort(final.begin(),final.end());


// n=final.size();

// // for(ll i=0;i<n;i++){
// //     cout<<final[i].first<<" "<<final[i].second<<endl;
// // }
// // cout<<endl;


// ll mx=0;
// ll mxv=-1;

// for(ll i=0;i<n;i++){
//    if(mx<final[i].first*final[i].second){
//     mx=final[i].first*final[i].second;
//     mxv=i;
//    }
// }
// // cout<<
// ll ans=0;

// for(ll i=0;i<n;i++){
//     if(final[i].second<(final[mxv].second)){
//         ans+=final[i].first*final[i].second;
//     }
//     else if(final[i].second>(final[mxv].second)){
//         ans+=(final[i].second-final[mxv].second)*final[i].first;
//     }
// }

// cout<<ans<<endl;

// }

// int main()
// {
//     Code By Mohityadav
//         ll t=1;
//         cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }





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
    ll ogn=n;

    vector<ll> v;
    map<ll,ll> mp;

    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        mp[elm]++;
    }

    vector<pair<ll,ll> > m;
    vector<ll>  temp;
   
    for (auto i : mp){
        m.push_back(make_pair(i.second,i.first));
    }

    sort(m.begin(),m.end());

    n=m.size();

    vector<ll> presum(n,0);
    ll sum=0;

    for(ll i=0;i<n;i++){
        sum+=m[i].first;
        presum[i]=sum;
    }

    map<ll,ll> curr;

        for(ll i=0;i<n;i++){
                temp.push_back(m[i].first);
                curr[m[i].first]++;
        }

ll answer=INT_MAX;


// for(ll i=0;i<n;i++){
//     cout<<temp[i]<<" ";
// }





// cout<<endl;


    for(ll i=1;i<=ogn;i++){
        ll idx = lower_bound(temp.begin(), temp.end(), i)-temp.begin();

        // cout<<idx<<" ";

        if(idx>=n || temp[idx]!=i){
            continue;
        }

        ll t=0;
            if(idx!=0){
                 t += presum[idx-1];
            }

            // cout<<sum << " " <<( presum[idx+curr[i]-1]) << " "  << ((n-1-idx-(curr[i]-1))*i)  << " ";
                t+=(sum-presum[idx+curr[i]-1])-((n-1-idx-(curr[i]-1))*i) ;
            

            // cout<<t<<"t ";

        answer=min(answer,t);
    }

    // cout<<endl;

cout<<answer<<endl;




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
