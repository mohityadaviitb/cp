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
    ll n,g,b;
    cin >> n>>g>>b;
    ll rn=n;

ll answer=0;



ll temp=(n+1)/2;
ll s=temp/g;
if(temp%g!=0){
    s++;
}
n-=temp;
answer+=temp;



if(s!=0){

    answer+=(s-1)*b;
    n-=(s-1)*b;
}
else{
    cout << rn<<endl;
    //    cout<<endl;
    return;
}


// cout <<answer<<endl;
// cout <<n<<" "<<temp%g<<endl;

if((n<=b+g-temp%g && n>0)){
    //    cout <<"RAM"<<endl;
    answer+=n;
    cout <<answer<<endl;
    // cout<<endl;
    return;
}
else if(n>0){
    answer+=b+g-temp%g;
    n-=b+g-temp%g;
}

if(n>0){
    answer+=n;
}

cout <<answer<<endl;
// cout<<endl;

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
