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
    ll m;
    cin >> m;

    vector<ll> v;
        map<ll,ll> mapp;

    fu(i, 0, m)
    {
        ll elm;
        cin >> elm;
        mapp[elm]++;
        v.pb(elm);
    }
ll answer=0;
ll scr=0;

    for(auto i : mapp){

       if(i.second==1){
        scr++;
        
       }
       else{
        answer++;
       }
    }

answer+=((scr+1)/2)*2;



    

cout << answer<<endl;







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
