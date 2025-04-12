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


int main()
{
    Code By Mohityadav
        ll temp=1;
        cin >> temp;
    while (temp--)
    {
        ll xval,yval;

        cin >> xval>>yval;
    
        if(yval==xval+1){
            cout<<"Yes"<<endl;
            //cout<<"ram"<<endl;
            
        }
        else{
            if((xval-yval+1)%9==0 && xval>yval){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        
    }
    return 0;
}
