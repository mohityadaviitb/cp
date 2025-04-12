#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;

    bool help(ll n,ll m, ll k, ll x){
        ll t=m/(x+1);
            if(n*x*t+n*(m%(x+1))>=k){
                return true;
            }
            else{
                return false;
            }
    }
    
    ll mk(ll n,ll m,ll k) {
        ll low = 1;
        ll high = m;
        while (low <= high) {
            ll mid = (low + high) / 2;
            bool ans = help(n,m,k,mid);
            if (ans) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
    



int main()
{
        ll t=1;
        cin >> t;
    while (t--)
    {
        ll n,m,k;
        cin >> n>>m>>k;
    
            cout<<mk(n,m,k)<<endl;
    }
    return 0;
}






