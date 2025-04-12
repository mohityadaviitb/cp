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


char f(string s,ll l,ll r,ll k){
       vector<char> d;
    d.push_back('x');
    d.push_back('y');
    d.push_back('z');
    d.push_back('w');

   for(ll i=0;i<4;i++){
    if(d[i]!=s[l] && d[i]!=s[r] && d[i]!=s[k] ){
        return d[i];
    }
   }
}



void solve()
{
string s;
cin >> s;

ll l=0;
ll r=0;
ll n=s.length();

if(s[0]==s[1]){
    l=0;
    r=1;
   
}

for(ll i=1;i<n-1;i++){
    if(s[i]==s[i+1] && s[i]!=s[i-1]){
        l=i;
     r=i;
    }


    else{
        for(ll j=l+1;j<=r;j++){
            s[j]=f(s,l-1,r+1,l);
            // cout << l  <<r << endl;
            j++;
        }
    }

    // cout << i << l << r<<endl;
    if(s[i]==s[i+1] ){
     
        r++;
    }

}

if(s[n-2]==s[n-1]){
   s[n-1]=f(s,n-1,n-1,n-1);
   
}

cout << s <<endl;

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
