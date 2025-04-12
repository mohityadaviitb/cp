#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
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
#define MODE 1000000007


ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base = base % mod;  
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int a, b;
    cin >> a >> b;
    ll ans = 1;

    for (int i = 2; i <= a + b; i++) {
        int start = max(1, i - b);
        int end = min(a, i - 1);  
        int count = max(0, end - start + 1); 

        if (count > 0) {
            ans = (ans * mod_pow(i + 1, count, MODE)) % MODE;
        }
    }

    cout << ans << endl; 
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
