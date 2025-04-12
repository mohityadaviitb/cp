#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;


void solve(vector<ll> &dpv)
{
    ll r;
    cin >> r;
    cout << dpv[r] << endl;
}

int main()
{
    Code By Mohityadav
    ll tee;
    cin >> tee;

    vector<ll> dpv(100005, 0);

    dpv[1] = 1;
    dpv[2] = 2;
    ll tp = 4;
    ll i = 3;

    while (i < 100005) { 
        while (i <= tp && i < 100005) { 
            dpv[i] = dpv[i - 1];
            i++;
        }
        if (i < 100005) {
            dpv[i] = dpv[i - 1] + 1;
              tp = 2 * i;
            i++;
        }
      
    }



    while (tee--) {
        solve(dpv);
    }
    return 0;
}


