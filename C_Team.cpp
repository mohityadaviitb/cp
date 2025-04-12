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
    ll z,v;
    cin >> z>>v;
    string s="";

if(v>2*z+2 || z>v+1){
    cout <<-1<<endl;
    return;
}

bool b = false;

if(v<z){
    b=true;s+='0';
    z--;
}

// string abhay = "beta";
// string mohit = "papa";
// abhay+=mohit;
// cout<<abhay<<endl;

// cout<<v<<" "<<z<<endl;
  while(v>z && z>0 && v>1){

// cout<<"ram"<<endl;
            s+="110";

            z--;
            v-=2;

    // cout<<s<<endl;
 
    }

    if(v==z){
        while(v>0 && z>0){
            s+="10";
            v--;
            z--;
        }

    }


  while(z>0 ){

    s+='0';
    z--;


    }

      while(v>0 ){

    s+='1';
    v--;


    }
cout<<s<<endl;

}

int main()
{
    Code By Mohityadav
        ll t=1;
        // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
