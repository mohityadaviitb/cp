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

       vector<ll> w;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        w.pb(elm);
    }

    set<ll> s;
    int t=0;

    for(int i=0;i<n;i++){
        if(s.find(v[i])==s.end()){
               while(w[t]!=v[i]){
            s.insert(w[t]);
            w[t]=-1;
            t++;
        }
        //   s.insert(w[t]);
            w[t]=-1;
            t++;

        }

     
    }

for(auto i : s){
    // cout << i<<" ";
}
// cout << endl;


cout << s.size()<<endl;





}

int main()
{
    Code By Mohityadav
        ll t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
