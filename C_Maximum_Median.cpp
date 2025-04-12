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
    ll n,k;
    cin >> n>>k;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    sort(v.begin(),v.end());

    ll t=n/2;


    // cout << v[t+1]<<" "<<v[t]<<endl;


    if(v[t+1]-v[t]>=k){
        cout<<v[t]+k<<endl;
        return;
    }
    else{
        k-=v[t+1]-v[t];
        v[t+1]=v[t];
    }

    ll s=0;

    for(ll i=t+1;i<n-1;i++){
        s+=v[n-1]-v[i];
    }

// cout<<s<<endl;

    if(k<s){
        cout<<v[t]<<endl;
        return;
    }
    else{
        k-=s;
        k-=v[n-1]-v[t];
        v[t]+=v[n-1]-v[t];
        if(k<0){
            v[t]+=k;
        }

    }

    ll r=k/((n/2)+1);

    cout<<v[t]+r<<endl;

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
