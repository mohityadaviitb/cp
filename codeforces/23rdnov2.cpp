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

    int n=s.length();

    if(n==1){
        cout << -1<<endl;
        return;
    }

   if(n==2){
    if(s[0]!=s[1]){
                cout << -1<<endl;
        return;
    }
    else{
        cout << s <<endl;
          return;
    }
   }

   bool m=false;

for(int i=0;i<n;i++){
    string st =s.substr(i,3);

    if(st[0]==st[1] && st[1]==st[2]){
           cout << st <<endl;
           m=true;
          return;

    }
    else if(st[0]==st[1] && st[1]==st[2]){

        cout << st.substr(0,2)<<endl;;
           m=true;
          return;

    }
    else if(st[0]==st[1] && st[1]!=st[2]){
          cout << st.substr(0,2)<<endl;;
             m=true;
          return;
    }
       else if(st[0]!=st[1] && st[1]==st[2]){
          cout << st.substr(1,2)<<endl;
             m=true;
          return;
    }
        else if(st[0]!=st[1] && st[1]!=st[2] && st[0]==st[2]){
               m=true;
          
         continue;
    }





}

if(m==false){
    cout << -1<<endl;
}

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
