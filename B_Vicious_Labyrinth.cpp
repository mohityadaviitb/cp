#include <bits/stdc++.h>

#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;


void solve()
{
    ll n,k;
    cin >> n>>k;

    vector<ll> ans(n,-1);
    fu(i, 0, n)
    {
        if(k%2==0){
            ans[i]=n-1;
        }
        else{
            ans[i]=n;
        }
       
    }

    ans[n-1]=n-1;
    ans[n-2]=n;

    fu(i, 0, n)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
        ll tttt=1;
        cin >> tttt;
    while (tttt--)
    {
        solve();
    }
    return 0;
}
