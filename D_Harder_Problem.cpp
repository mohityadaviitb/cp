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
                                                                                             
                                                                                             
// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a;
//            vector<bool> used(200005,false);
//     fu(i, 0, n)
//     {
//         ll elm;
//         cin >> elm;
//         used[elm]=true;
//         a.pb(elm);
//     }

//        vector<ll> b;

//        b.push_back(a[0]);
//        vector<ll> f(200005,0);
  
//        f[a[0]]++;
//        ll nextunused=1;

//     for(ll i=0;i<n;i++){

//     }


          
// }
                                                                                             
                                                                                             
                                                                                             
                                                                                             
// int main()
// {
//     Code By Mohityadav
//         ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    for(ll i=0;i<n;i++)
    {
        ll elm;
        cin >> elm;

        v.push_back(elm);
    }

    vector<bool> used(200001, false);
    vector<int> freq(200001, 0);
    int nextUnused = 1;

    for (int i : v) {
        used[i] = true;
    }

    for (int i : v) {
        if (freq[i] == 0) {
            cout << i << " ";
            freq[i]++;
        } else {
            while (used[nextUnused]) {
                nextUnused++;
            }
            cout << nextUnused << " ";
            used[nextUnused] = true;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}  