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
bool b =false;

    for(ll i=0;i<n;i++){

        if(v[i]%5==0){
            b=true;
        }

        if(v[i]%2!=0){
            v[i] +=v[i]%10;
        }
    }

if(b==true){
    ll t=v[0];
    for(ll i=0;i<n;i++){
        if(v[i]!=t){
            cout << "No"<<endl;
            return;
        }
    }
    cout << "Yes"<<endl;
}
else{

    for(ll i=0;i<n;i++){

        // cout << v[i]<<" ";

        while(v[i]%10!=2){
               v[i] +=v[i]%10;
        }
    }

    // cout << endl;

    ll l=v[0];

   for(ll i=0;i<n;i++){
      if((v[i]-l)%20==0){
        continue;

      }
      else{
        cout << "No"<<endl;
        return;
      }
    }

cout << "Yes"<<endl;














}



}

int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;
    while (t--)
    {
        // cout << t<<endl;
        solve();
    }
    return 0;
}
