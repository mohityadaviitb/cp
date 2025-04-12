#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;


ll power(ll x, ll y)
{
    int res = 1;
    x = x % MOD;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1ll)
            res = (res * x) % MOD;
        y = y >> 1ll;
        x = (x * x) % MOD;
    }
    return res;
}

void solve(ll t) {
    ll n, m;
    cin >> n >> m;
    ll ans = 0;

    for (ll i = 0; i < m; i++) {
        ll l, r, x;
        cin >> l >> r >> x;
        ans |= x;  
        // ans %= MOD; 
    }

   
    ll power = 1, base = 2, exp = n - 1;
    while (exp > 0) {
        if (exp % 2) power = (power * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }

    cout << (ans * power)% MOD << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve(t);
    }
    return 0;
}