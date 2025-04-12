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

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    vector<ll> ans;
    ans.push_back(v[0]);
    ll t=-1;

  
        if(v[0]<v[1]){
            t=1;
        }
        else{
            t=-1;
        }



          for(int i=1;i<n-1;i++){ 
            // cout << t << " "<< v[i+1] << " " <<v[i]<<endl;
                    if(t*v[i+1]>t*v[i]){
                        continue;
                    }
                    else{
                        ans.push_back(v[i]);
                        t=-t;
                    }
               }

                   ans.push_back(v[n-1]);

        cout << ans.size()<<endl;

    for(int i=0;i<ans.size();i++){
            cout << ans[i]<<" ";
    }
    cout << endl;

  

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
