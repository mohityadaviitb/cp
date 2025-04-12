#include <bits/stdc++.h>

#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;


void solve()
{
    ll n,t,y;
    cin >> n>>t>>y;

    if(abs(t-y)%2==0){
        cout << "YES"<<endl;
    }
    else{
         cout << "NO"<<endl;
    }
}

int main()
{
   
        ll t;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
