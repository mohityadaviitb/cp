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
    string v;
    cin >> v;
    ll n = v.length();

    // vector<ll> v;
    // while (k > 0)
    // {

    //     v.pb(k % 10);
    //     k /= 10;
    //     n++;
    // }
    reverse(v.begin(), v.end()); 

    ll z = 0;
    ll mn = INT_MIN;
    ll mni = -1;

    for (ll i = n - 1; i >= 0; i--)
    {

        if (v[i] == '0')
        {
            z++;
        }
        else
        {
            if (z + 1 >= mn)
            {
                mn = z + 1;
                mni = n - i - 1;
            }
        }
    }

    ll ans = 0;
    for (ll i = n - 1; i >= n - mni; i--)
    {
        if (v[i] != '0')
        {
            ans++;
        }
    }

    
    ans += n - mni - 1;

    cout << ans << endl;
}

int main()
{
    Code By Mohityadav
        ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

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
//     ll len=0;

//     vector<ll> v;
//    while(n>0)
//     {

//         v.pb(n%10);
//         n/=10;
//         len++;
//     }

//     bool b=false;
//     ll ans=0;
//     ll t=0;

//     for(ll i=len-1;i>=0;i--){

//             if(v[i]==0){
//                 t++;
//                 // cout<<i<<endl;
//             }

//         else{
//             break;
//         }

//         }

// b=false;

//     for(ll i=0;i<len;i++){
//     if(v[i]!=0){
//         ans++;
//         b=true;
//     }
//     else{
//         if(!b){
//             ans++;
//         }
//     }
// // cout<<v[i]<<" " <<ans<<" "<<i<<endl;
//     }

//     cout<<ans-1-t<<endl;

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
