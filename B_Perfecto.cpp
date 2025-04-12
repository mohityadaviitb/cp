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
    ll n;
    cin >> n;
    ll sum=0;
    set<ll> s;


    vector<ll> v;
    fu(i, 1, n+1)
    {
        v.pb(i);
        sum+=i;
        s.insert(i);
    }

    ll t=sqrt(sum);

    if(t*t==sum){
        cout<<-1<<endl;
        return;
    }

    vector<ll> ans;
    ll currsum=0;
    ll curr=1;
    // bool prev=false;
    // ll preval=0;

    for(ll i=0;i<n;i++){

        ll t=sqrt(currsum+curr);

        // cout<<t<<endl;


        

        if(t*t!=currsum+curr ){
            ans.push_back(curr);
            
            currsum+=curr;
            curr++;
        }
        else{
            ans.push_back(curr+1);
            ans.push_back(curr);
            currsum+=2*curr+1;
       
curr+=2;


        }

       

    }

    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
