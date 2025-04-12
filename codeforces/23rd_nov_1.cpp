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

void solve( vector<ll> ans)
{
    ll n;
    cin >> n;

    for(int i=0;i<n;i++){
        cout << ans[i]<<" ";
    }

cout << endl;



}

int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;

  vector<ll> ans;
    
    ll tr=3;
    ans.push_back(2);


    for(int i=0;i<51;i++){
        ans.push_back(tr);
        tr+=2;
    }


        
    while (t--)
    {
        solve(ans);
    }
    return 0;
}
