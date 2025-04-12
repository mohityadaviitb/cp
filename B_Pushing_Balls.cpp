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
    ll n,m;
    cin >> n>>m;

    vector<vector<char> > v(n,vector<char>(m,0));
    fu(i, 0, n)
    {
        fu(j, 0, m)
        {
        char elm;
        cin >> elm;
        v[i][j]=elm;
        }
    }

    fu(i, 0, n)
    {
        fu(j, 0, m)
        {
            if(v[i][j]=='1' || v[i][j]=='2'){
                v[i][j]='2';
            }
            else{
                break;
            }
        }
    }


    fu(j, 0, m)
    {
        fu(i, 0, n)
        {
            if(v[i][j]=='1' || v[i][j]=='2'){
                v[i][j]='2';
            }
            else{
               break;
            }
        }
    }


    // fu(i, 0, n)
    // {
    //     fu(j, 0, m)
    //     {
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }

    fu(i, 0, n)
    {
        fu(j, 0, m)
        {
            if(v[i][j]=='1'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
    
    
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
