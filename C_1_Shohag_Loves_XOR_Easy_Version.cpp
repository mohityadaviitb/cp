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
#include <cmath>








set<ll> countv(int x, long long m) {
 
        set<ll> ans;

    for (long long d = 1; d <= 2*x ; d++) { 
        long long y = x ^ d;               
        if (y > 0 && y <= m && y % d == 0) { 
       ans.insert(y);
        }
    }

    return ans;
}







vector<int> getdiv(int n) {
    vector<int> divisors;


    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
         divisors.push_back(n);
    return divisors;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        long long m;
        cin >> x >> m;
            set<ll> s = countv(x,m);

//             for(auto i: s){
//                 cout << i <<" ";
//             }
// cout << " r ";

        vector<int> divisors = getdiv(x);
      
            vector<ll> ans;

            //    for(auto i: divisors){
            //     cout << i <<" ";
            // }

        for (int z : divisors) {
            int y = x ^ z; 
         
            if (y >= 1 && y <= m && y != x) {
                //    cout << z << " w " << y<<endl;
                if (x % z == 0 ) { 
                    
                    s.insert(y);
                    // cout << y<<" ";
                }
            }
        }

        cout << s.size() <<endl;
    }
    return 0;
}






