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


vector<ll> printDivisors(int n)
{
    vector<ll> ans;

    // Note that this loop runs till square root
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal, print only one
            if (n / i == i)
               ans.push_back(i);
            else // Otherwise print both
                 ans.push_back(i);
                       ans.push_back(n/i);
        }
    }
    return ans;
}




void solve()
{
    ll n;
    cin >> n;

    vector<ll> ans = printDivisors(n);
    sort(ans.begin(),ans.end());

    int m=1;
    map<ll,ll> mp;

    for(ll i=0;i<ans.size();i++){
        // cout << ans[i]<<" ";
        mp[ans[i]]++;
    }


// cout << endl;






    for(auto i : mp){
        if(i.second%2==0){
            cout <<i.first<< " a "<<i.second<<endl;
            m *= pow(i.first,(i.second)/2);
        }
        else{
               cout <<i.first<< " b "<<i.second<<endl;
            m *= pow(i.first,(i.second+1)/2);
        }
    }

    cout << m << " " << n-m<<endl;

  
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
