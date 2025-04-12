#include<bits/stdc++.h>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#include<cmath>


void primeFactors(int n,map<ll,ll> &mp) 
{ 

    vector<ll> ans;

    while (n % 2 == 0) 
    { 
      // ans.push_back(2);
      mp[2]++;
        n = n/2; 
    } 
 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
              //  ans.push_back(i);
                  mp[i]++;
            n = n/i; 
        } 
    } 
 
    if (n > 2) 
            //  ans.push_back(n);
               mp[n]++;
} 





// ll myPow(ll x, ll n) {
//   ll ans = 1;
//   long long nn = n;
//   if (nn < 0) nn = -1 * nn;
//   while (nn) {
//     if (nn % 2) {
//       ans = ans * x;
//       nn = nn - 1;
//     } else {
//       x = x * x;
//       nn = nn / 2;
//     }
//   }
//   if (n < 0) ans = 1 / ans;
//   return ans;
// }

void solve()
{
    ll n;
    cin >> n;
    ll mx=INT_MIN;
    ll total=1;

    vector<ll> v;
    map<ll,ll> mp;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        // mx=max(mx,elm);
        // total *= elm;
    }





for(int i=0;i<n;i++){
  primeFactors(v[i],mp);
}

for(auto it : mp){
  if(it.second%n!=0){
        cout << "NO" <<endl;;
    return;
  }
}

  cout << "YES"<<endl;
        return;



// for(int i=1;i<=mx;i++){
//     if( (myPow(i,n))==total){
//         cout << "YES"<<endl;
//         return;
//     }
// }
    // cout << "NO" <<endl;;

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






// #include <bits/stdc++.h>
// using namespace std;
// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define Mohityadav cout.tie(NULL);
// #define fu(i, a, b) for (ll i(a); i < b; i++)
// #define ll long long int

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     // Calculate the GCD of all elements
//     ll gcd_all = v[0];
//     for (ll i = 1; i < n; i++) {
//         gcd_all = __gcd(gcd_all, v[i]);
//     }

//     // If GCD is greater than 1, we can make all elements equal
//     if (gcd_all > 1) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// int main() {
//     Code By Mohityadav
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }