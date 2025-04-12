





 #include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;


void solve()
{
    ll number;
    cin >> n;

    vector<vector<ll> > a(n, vector<ll>(n, -1));
        vector<vector<ll> > pr(n+5, vector<ll>(n+5, 0));
    fu(i, 0, n)
    {
        fu(j, 0, n)
        {
            ll elm;
            cin >> elm;
            a[i][j] = elm;
        }
    }



     fu(i, 0, n)
    {
        fu(j, 0, n)
        {
            pr[i][j+1]=pr[i][j]+a[i][n-1-j];
        }
    }

    ll ans=-1;
    ll mx=n;

    for(ll id=0;id<mx;id++){
        ll c=0;
         fu(i, 0, n)
    {
        if(pr[i][id]==id){
            c++;
        }
    }

    if(c!=0){
        ans=id;
    }
    mx=min(mx,id+c);
    }

    cout<<ans+1<<endl;

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
