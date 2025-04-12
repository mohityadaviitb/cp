#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll sum=0;
    ll mx=INT_MIN;

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
        sum+=elm;
        mx=max(mx,elm);
    }
    // cout<<sum<<endl;

    vector<ll> odd;
    vector<ll> even;

    for(ll i=0;i<n;i++){
        if(v[i]%2!=0){
            odd.push_back(v[i]);
        }
        else{
            even.push_back(v[i]);
        }
    }

    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    if(odd.size()==0 || even.size()==0){
        cout<<mx<<endl;
    }
    else{
        ll a = sum-(odd.size()-1);
  
        // cout<<a<<b<<endl;

        // if(odd[odd.size()-1]>even[even.size()-1]){
        //     cout<<a<<endl;
        // }
        // else{
        //     cout<<b<<endl;
        // }
cout<<a<<endl;
     
    }
    
}

int main()
{
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
