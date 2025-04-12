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
    string s;
    cin >> s;

    ll x=0;
    ll y=0;
    set<vector<ll> > st;
    ll ans=0;

    for(ll i=0;i<s.length();i++){
            vector<ll> v;
        if(s[i]=='N'){
        
            v.push_back(x);
                v.push_back(y);

            y++;
              v.push_back(x);
                v.push_back(y);

        }
        else  if(s[i]=='E'){
          
            v.push_back(x);
                v.push_back(y);

           x--;
              v.push_back(x);
                v.push_back(y);

        }
         else if(s[i]=='W'){
           
            v.push_back(x);
                v.push_back(y);

        x++;
              v.push_back(x);
                v.push_back(y);

        }
        else  if(s[i]=='S'){
 
            v.push_back(x);
                v.push_back(y);

            y--;
              v.push_back(x);
                v.push_back(y);

        }
        vector<ll> nv(4);

        nv[0]=v[2];
         nv[1]=v[3];
          nv[2]=v[0];
           nv[3]=v[1];


        if(st.find(v)!=st.end()){
            ans+=1;
        }
        else if(st.find(nv)!=st.end()){
               ans+=1;
        }
        else{
            ans+=5;
        }
        st.insert(v);

    }

 cout<<ans<<endl;

}

int main()
{
    Code By Mohityadav
        ll t;
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
