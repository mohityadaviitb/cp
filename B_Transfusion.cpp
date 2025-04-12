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
    ll nr;
    cin >> nr;
    ll s=0;
    vector<ll> v;
    fu(i, 0, nr)
    {
        ll elm;
        cin >> elm;
        s+=elm;
        v.pb(elm);
    }

    if(s%nr!=0){
        cout << "NO"<<endl;
    }
    else{
        ll t=s/nr;
        // cout << t<<endl;

        for(ll i=0;i<nr;i++){
            v[i]-=t;
        }


        for(ll i=0;i<nr-2;i++){
            //  cout << v[i]<< " rir "<<v[i+2]<<endl;
             ll temp=v[i];
            v[i]=0;
            v[i+2] += temp; 
            // cout << v[i]<< " rir "<<v[i+2]<<endl;
        }

         for(ll i=0;i<nr;i++){
          if(v[i]==0){
            continue;
          }
          else{
            // cout << i << " t "<<v[i]<<endl;
              cout << "NO"<<endl;
              return;
          }
        }
        cout << "YES"<<endl;


    }



}

int main()
{
    Code By Mohityadav
        ll trr;
        cin >> trr;
    while (trr--)
    {
        solve();
    }
    return 0;
}
