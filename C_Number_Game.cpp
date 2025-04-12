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
#define dbg(v) cerr << 'L' << '(' << __LINE__ << ')' << '-' << '>' << ' ' << #v << '=' << (v) << endl;
#else
#define dbg(v)
#endif



ll printDivisors(int n)
{
         ll ans=0;
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++) {
   
        if (n % i == 0) {
            // If divisors are equal, print only one
            if (n / i == i){
                //  cout << i << " ";
                 if(i%2!=0){
                ans++;
              }
            }
             
            else {
              
                      if(i%2!=0){
                        //    cout << i << " ";
                ans++;
              }
                   else if((n/i)%2!=0){
                ans++;
                    // cout << n/i << " ";
              }
               
            }
               
        }
      
    }
      return ans-1;
}
                                                                                   
                                                                                             
void solve()
{
    ll n;
    cin >> n;

    if(n==1){
        cout <<"FastestFinger" <<endl;
    }

    else if(n==2){
    cout << "Ashishgup" <<endl;
   }

   else if(n%2!=0){
    cout << "Ashishgup" <<endl;
   }
    else   if(n==4){
                 cout <<"FastestFinger" <<endl;
        }

   else{

    ll ans=printDivisors(n);
    // cout <<ans<<endl;

       if(ans==0){
         cout <<"FastestFinger" <<endl;
         return;
    }
    
    if(n%4==0  ){

    
       
            cout << "Ashishgup" <<endl;
    return;
    }

 

    if(ans>1){
         cout << "Ashishgup" <<endl;
       
    }
    else{
              cout <<"FastestFinger" <<endl;
    }









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