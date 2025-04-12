#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(100005, 0);

    ll t = 0;
    ll f = 0;
    vector<ll>vec;
    fu(i, 0, n)
    {
        ll x;
       cin >> x;
        
        t -= ans[x] / 2;
        f -= ans[x] / 4;
        ans[x]++;
        vec.push_back(x);
        t += ans[x] / 2;
        f += ans[x] / 4;
    }
    ll k =0;
    ll k2=0;

          fu(i, 0, 100005)
    {
    k += ans[i] / 2;
        k2 += ans[i] / 4;
    }
    if(k==t && k2==f){
        //ok
    }
    else{
        cout<<k<<"$$"<<k2<<"$$"<<t<<"$$"<<f<<endl;
        for(ll i=0; i<n; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    


    ll q;
    cin >> q;

    fu(i, 0, q)
    {
        char a;
        cin >> a;

        ll b;
        cin >> b;
        t -= ans[b] / 2;
        f -= ans[b] / 4;
        if (a == '+')
        {

            ans[b] ++;
        }
        else
        {

            ans[b] --;
        }
        t += ans[b] / 2;
        f += ans[b] / 4;

        if (f >= 1 && t >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{

        ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}







#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(100005, 0);

    ll t = 0;
    ll f = 0;
    fu(i, 0, n)
    {
        ll x;
       cin >> x;
        

        ans[x]++;
  
    }

      fu(i, 0, n)
    {
   t += ans[i] / 2;
        f += ans[i] / 4;
    }

    ll q;
    cin >> q;

    fu(i, 0, q)
    {
        char a;
        cin >> a;

        ll b;
        cin >> b;
        t -= ans[b] / 2;
        f -= ans[b] / 4;
        if (a == '+')
        {

            ans[b] ++;
        }
        else
        {

            ans[b] --;
        }
        t += ans[b] / 2;
        f += ans[b] / 4;

        if (f >= 1 && t >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{

        ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
