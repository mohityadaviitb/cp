#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()

void solve()
{
    ll hc, dc, hm, dm, k, w, a;
     ll hc1, dc1, hm1, dm1, k1, w1, a1;

    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
 hc1=hc, dc1=dc, hm1=hm, dm1=dm, k1=k, w1=w, a1=a;
    int z = 0;




    fu(x, 0, k+1)
    {
        // cout << (hm / (dc + w * x))<< " " << ((hc + a * (k - x)) / dm) << endl;
      ll m =  (hm / (dc + w * x));
      ll c =  ((hc + a * (k - x)) / dm);

//   dc += (w * x);
//   hc += a * (k - x);

//         while(hm >0 && hc>0){

//               hm -= (dc);
//                                     //   cout << "hm" <<hm << "x"<<x<< "hc" <<hc <<endl;

//             if(hm<=0){
//                         z=1;
//                 break;
//             }
          
//               hc -= dm;
//             // if(hc<=0){
//             //                z=-1;
//             //     break;
//             // }


//         }
        // if(hm<=0){
        //     z=1;
        //     break;
        // }
        // if(hc<=0){
        //     z=0;
        // }
        



//  hc=hc1, dc=dc1, hm=hm1, dm=dm1, k=k1, w=w1, a=a1;

      if(m<c){
        z=1;
                cout <<"m"<< m <<"c"<< c << "zb" <<z<<"x"<< x<< endl;
      }
      else if(m==c){
        z=1;
                cout <<"m"<< m <<"c"<< c << "zb" <<z<<"x"<< x<< endl;

      }
      else if(m-1==c){
        z=1;
                cout <<"m"<< m <<"c"<< c << "zc" <<z<<"x"<< x<< endl;

      }
      
    }

    if (z == 0 || z == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
