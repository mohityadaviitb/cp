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
    ll n,t;
    cin >> n>>t;

    vector<ll> v;
        vector<ll> ans(n,0);
        ll sum=0;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm); 
        sum+=elm;
    }

    if(sum<=t){
        cout << n<<endl;
        return;
    }
    ans[0]=v[0];
       fu(i, 1, n)
    {
      ans[i]=ans[i-1]+v[i];
    }
    //   fu(i, n, 2*n)
    // {
    //   ans[i]=ans[i-1]+v[i-n];
    // }
ll m=INT_MIN;


for(ll i=0;i<2*n;i++){
    // cout << ans[i]<<" ";
}

// cout <<endl;




    for(ll i=0;i<n;i++){
ll r=0;
        if(i==0){
               r = upper_bound(ans.begin(),ans.end(),t)-ans.begin()-1;
        }
        else{
        r = upper_bound(ans.begin(),ans.end(),t+ans[i-1])-ans.begin()-1;
    
        }

    m=max(m,r-i+1);
    // cout<< r<<" "<< r-i+1<<endl;
    }

    
cout << m<<endl;



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
