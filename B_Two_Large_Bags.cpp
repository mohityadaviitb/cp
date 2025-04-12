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

    vector<ll> v(1005);
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v[elm]++;
     
    }



    // for(ll i=0;i<10;i++){
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

    for(ll i=1;i<1005;i++){
            if(v[i]==1){
                cout<<"No"<<endl;
                // cout<<v[i] <<" "<<  i<<endl;
                return;
            }
            else{
                if(v[i]>2){
                    v[i+1]+=v[i]-2;
                    v[i]=2;
                }
            }
    }

    cout<<"Yes"<<endl;


    
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
