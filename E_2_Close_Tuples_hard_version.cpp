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
#define mod 1000000007
const int N = 300500;


ll fact[N];
ll invFact[N];

ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) % mod;
            p /= 2;
        } else {
            res = (res * a) % mod;
            p--;
        }
    }
    return res;
}

ll C(int n, int k) {
    if (k > n) {
        return 0;
    }
    return fact[n] * invFact[k] % mod * invFact[n - k] % mod;
}



void solve(ll t)
{
    ll n,m,k;
    cin >> n>>m>>k;

   

    vector<ll> v;
    fu(i, 0, n)
    {
        ll elm;
        cin >> elm;
        v.pb(elm);
    }

    // if(t==32107-197){
    //     cout<<n<<"a"<<m<<"b"<<k<<"c";

    //     fu(i, 0, n)
    //     {
         
    //        cout<<v[i]<<"d";
    //     }

    // }

    if(m==1){
        cout<<n<<endl;
        return;
    }

    ll ans=0;

    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++){
        ll t = v[i];

        ll idx=upper_bound(v.begin(),v.end(),t+k)-v.begin();

        // cout<<idx<<" ";

        if(idx>=n){
           idx=n-1;
        }



        else if(v[idx]>t+k){
            idx--;
        }

        ll d=idx-i;
        // cout<<i << " " <<idx<<" " << d <<endl;
        if(d>0){
            ans+= C(d, m - 1);
            ans%=mod;
        }
      
    }


    cout<<ans<<endl;
    
}

int main()
{
    Code By Mohityadav
        ll t=1;
        cin >> t;

        fact[0] = invFact[0] = 1;
        for (int i = 1; i < N; i++) {
            fact[i] = (fact[i - 1] * i) % mod;
            invFact[i] = fast_pow(fact[i], mod - 2);
        }


    while (t--)
    {
        solve(t);
    }
    return 0;
}
