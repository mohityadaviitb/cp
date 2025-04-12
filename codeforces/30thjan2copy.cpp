#include <iostream>
#include<map>
using namespace std;

#define ll long long 

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;
        ll a[n];
        ll b[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        map<ll,ll> l;
        
        for (ll i = 0; i < n; i++)
        {
            l[a[i]] = b[i];
        }
        for (ll i(0);i<n;i++)cout << i+1 << " ";
        cout << '\n';
        for(auto it : l) cout << it.second << " ";
        cout << '\n';

    }

    return 0;
}
