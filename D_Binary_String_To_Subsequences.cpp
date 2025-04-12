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
    ll n;
    cin >> n;

    string s;
    cin >>s;
    ll z=0;
    ll v=0;

    vector<ll> ans;

    
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            z++;

            if(v>0){
                ans.push_back(z);
                v--;
              
            }
            else{
                ans.push_back(z);
            }
           
        }
        else{
            v++;

            if(z>0){
                ans.push_back(z);
                z--;
              
            }
            else{
                ans.push_back(v);
            }
        }
    }

cout<<z+v<<endl;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;



}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
