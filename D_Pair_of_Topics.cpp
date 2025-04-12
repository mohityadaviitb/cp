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
// #define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
// #else
// #define dbg(v)
// #endif



// int leastgreater(vector <ll> a,ll low, ll high, ll key)
// {
// 	ll ans = -1;

// 	while (low <= high) {
// 		ll mid = low + (high - low + 1) / 2;
// 		ll midVal = a[mid];

// 		if (midVal < key) {

// 			// if mid is less than key, all elements
// 			// in range [low, mid - 1] are <= key
// 			// then we search in right side of mid
// 			// so we now search in [mid + 1, high]
// 			low = mid + 1;
// 		}
// 		else if (midVal > key) {

// 			// if mid is greater than key, all elements
// 			// in range [mid + 1, high] are >= key
// 			// we note down the last found index, then 
// 			// we search in left side of mid
// 			// so we now search in [low, mid - 1]
// 			ans = mid;
// 			high = mid - 1;
// 		}
// 		else if (midVal == key) {

// 			// if mid is equal to key, all elements in
// 			// range [low, mid] are <= key
// 			// so we now search in [mid + 1, high]
// 			low = mid + 1;
// 		}
// 	}

// 	return ans;
// }
                                                                                             
                                                                                             
// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a;
//     fu(i, 0, n)
//     {
//         ll elm;
//         cin >> elm;
//         a.pb(elm);
//     }
//        vector<ll> b;
//     fu(i, 0, n)
//     {
//         ll elm;
//         cin >> elm;
//         b.pb(elm);
//     }

//      vector<ll> c(n,-1);
//        vector<ll> d(n,-1);
//         fu(i, 0, n)
//     {
//         c[i]=a[i]-b[i];
//         d[i]=b[i]-a[i];
        
//     }
//     sort(c.begin(),c.end());
//      sort(d.begin(),d.end());
//      ll ans=0;

// for(ll i=0;i<n;i++){
//     ll x = c[i];

//    ll y = leastgreater(c,i+1, n-1, -x);

// //    cout << y<<endl;

//    if(y!=-1){
// ans+= n-y;
//    }

   


// }
// cout << ans<<endl;
          
// }
                                                                                             
                                                                                             
                                                                                             
                                                                                             
// int main()
// {
//     Code By Mohityadav
//         ll t=1;
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
#define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
#else
#define dbg(v)
#endif

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    fu(i, 0, n) cin >> a[i];
    fu(i, 0, n) cin >> b[i];

    vector<ll> c(n, -1);
    fu(i, 0, n) {
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());
    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        ll x = -c[i];
        auto it = lower_bound(c.begin() + i + 1, c.end(), x+1);
        if (it != c.end()) {
            ans += c.end() - it;
        }
    }

    cout << ans << endl;
}

int main() {
    Code By Mohityadav
    ll t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
