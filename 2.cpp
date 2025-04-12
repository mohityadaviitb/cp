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

        int n;
        cin>>n;
        vector<int> mv(n,0);
        unordered_map<int , bool> mp;
        int mk=-1;
        for(int i=0;i<n;i++){
            cin>>mv[i];
            if(mp[mv[i]]) {
                mk = mv[i];
                continue;
            }
            else{ mp[mv[i]] = true;}
        }
        if(mk == -1){
            cout<<-1<<'\n';
            return;
        }
        cout<<1<<'\n'<<mk<<'\n';
      
    
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
