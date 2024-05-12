// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()
 #include <string>
#include <algorithm>



bool is_reverse_sorted(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return std::is_sorted(reversed.begin(), reversed.end());
}


void solve()
{
	ll n,k,q;
    cin >> n >> k >> q;


    int ak[k+1];
    ak[0]=0;
    fu(i,1,k+1){
        cin >> ak[i];
    }

    int bk[k+1];
    bk[0]=0;
    fu(i,1,k+1){
        cin >> bk[i];
    }

    int aq [q];
     fu(i,0,q){
        cin >> aq[i];
    }

    int ck[k+1];
    ck[0]=0;
    fu(i,1,k+1){
            ck[i]=(ak[i]-ak[i-1])/(bk[i]-bk[i-1]);
    }

int bq[q];
  
    fu(i,0,q){
           bq[i]=0;
    }


    fu(i,0,q){
    int  j=0;
//         while(aq[i]>=0){
//             if(  aq[i]-ak[j]>0){
//   aq[i]=aq[i]-ak[j];
//                 bq[i] +=ak[j]*ck[j];
//             }
//             else{
//                   bq[i] +=aq[i]*ck[j];
//             }
//             j++;
//         }

while(aq[i] >= 0 && j <= k){
    if(aq[i] - ak[j] > 0){
        aq[i] -= ak[j];
        bq[i] += ak[j] / ck[j];
    }
    else{
        bq[i] += aq[i] / ck[j];
        break; // No need to continue if we've exhausted aq[i]
    }
    j++;
    //   cout << bq[i] << " ";
}

      

            cout << bq[i] << " ";
    }
    cout << endl;


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
