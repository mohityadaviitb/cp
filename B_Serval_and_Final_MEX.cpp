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


    vector<pair<ll,ll> > ans;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }
   
  bool m=false;
  ll bi=-1;

  for(ll i=0;i<n;i++){
    if(v[i]!=0){
        m=true;
        bi=i;
        break;
    }
  }




if(m){

    if(bi==0){
        cout<<2<<endl;
        cout<<bi+2<<" "<<n<<endl;
        // cout<<1<< " "<<bi<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    else if(bi==1){
        cout<<3<<endl;
        cout<<bi+2<<" "<<n<<endl;
        cout<<1<< " "<<bi+1<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    else if(bi==n-1){
        cout<<2<<endl;
        // cout<<bi+2<<" "<<n<<endl;
        cout<<1<< " "<<bi<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    else if(bi==n-2){
        cout<<3<<endl;
        cout<<bi+1<<" "<<n<<endl;
        cout<<1<< " "<<bi<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }


    cout<<3<<endl;
    cout<<bi+2<<" "<<n<<endl;
    cout<<1<< " "<<bi<<endl;
    cout<<1<<" "<<3<<endl;
}
else{
        cout<<3<<endl;
        cout<<(n/2)+1<<" "<<n<<endl;
        cout<<1<<" "<<n/2<<endl;
        cout<<1<<" "<<2<<endl;
}


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



