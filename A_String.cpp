#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;


void solve()
{
  string s;
  cin >>s;
  ll ans=0;

  for(ll i=0;i<s.length();i++){
    if(s[i]=='1'){
        ans++;
    }
  }
cout <<ans<<endl;

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
