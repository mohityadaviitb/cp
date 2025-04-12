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
    ll n;
    cin >> n;

    vector<string> v;
    fu(i, 0, n)
    {
        string elm;
        cin >> elm;
        v.pb(elm);
    }
       ll ta=0,tb=0,tc=0,td=0,te=0;
    

    vector<vector<ll> > ans(n,vector<ll> (5,-1));

    for(ll i=0;i<n;i++){
        ll a=0,b=0,c=0,d=0,e=0;

        for(ll j=0;j<v[i].length();j++){
            // cout<<v[i][j]<<endl;
            if(v[i][j]=='a'){
                a++;
                  ta++;
            }
            else  if(v[i][j]=='b'){
                b++;
                  tb++;
            }
             else  if(v[i][j]=='c'){
                c++;
                  tc++;
            }
             else  if(v[i][j]=='d'){
                d++;
                  td++;
            }
             else  if(v[i][j]=='e'){
                e++; 
                te++;
            }

        }
// cout<<endl;
//         cout<<a<<b<<c<<d<<e<<endl;

        
              ans[i][0]=a-b-c-d-e;
              ans[i][1]=b-c-d-e-a;
              ans[i][2]=-a-b+c-d-e;
              ans[i][3]=-a-b-c+d-e;
              ans[i][4]=-a-b-c-d+e;
          

      
    }

       vector<vector<ll> > answer(5,vector<ll> (n,-1));

        for(ll i=0;i<5;i++){
    

        for(ll j=0;j<n;j++){
                answer[i][j]=ans[j][i];
        }

        }

        ll m=INT_MIN;


            for(ll i=0;i<n;i++){
                for(ll j=0;j<5;j++){
                    // cout<<ans[i][j]<<" ";
                }
                // cout<<endl;
            }

               for(ll i=0;i<5;i++){
        sort(answer[i].begin(),answer[i].end());}


            for(ll i=0;i<5;i++){
                for(ll j=0;j<n;j++){
                    // cout<<answer[i][j]<<" ";
                }
                // cout<<endl;
            }

            // cout<<endl;

    for(ll i=0;i<5;i++){
     
        ll s=0;
        for(ll j=n-1;j>=0;j--){
            s+=answer[i][j];

            
          
            // cout<<endl<<s<<endl;

             if(s==0 && answer[i][j]==0){
          
                m=max(m,s);
                break;
            }
            if(s<=0 ){
                    m=max(m,n-1-j);
                    break;
            }
            
            // else if(s!=0 && answer[i][j]==0 && answer[i][j-1]!=0){
            //         m=max(m,n-j);
            //         break;
            // }
            else if(j==0){
                   m=max(m,n);
            }
           
         

            

        }   

//   if(m==12){
//                 cout<<endl <<i<<"ram"<<endl;
//             }


    }
cout<<m<<endl;



    
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











// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define fi(i,a,b) for(ll i=a;i<b;i++)
// #define fd(i,a,b) for(ll i=b-1;i>=a;i--)
// #define sort_arr(arr) sort(arr.begin(), arr.end())
// #define rsort_arr(arr) sort(arr.begin(), arr.end(), greater<ll>())
// ll MOD = 1e9+7;
// //bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
// //	for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
// //}
// void solve(){
//     ll n;
//     cin>>n;
//     vector<string> arr(n);
//     fi(i,0,n){
//         cin>>arr[i];
//     }
//     vector<ll> a(n),b(n),c(n),d(n),e(n);
//     ll ca=0,cb=0,cc=0,cd=0,ce=0;
//     fi(i,0,n){ 
//         string s = arr[i];
//         ll ta=0,tb=0,tc=0,td=0,te=0;
//         fi(j,0,s.length()){
//             if(s[j]=='a'){
//                 ca++;
//                 ta++;
//             }
//             if(s[j]=='b') {
//                 cb++;
//                 tb++;
//             }
//             if(s[j]=='c') {
//                 cc++;
//                 tc++;
//             }
//             if(s[j]=='d') {
//                 cd++;
//                 td++;
//             }
//             if(s[j]=='e') {
//                 ce++;
//                 te++;
//             }
//         }  
//         a[i] = ta-(tb+tc+te+td);
//         b[i] = tb-(ta+tc+te+td);
//         c[i] = tc-(tb+ta+te+td);
//         d[i] = td-(tb+tc+te+ta);
//         e[i] = te-(tb+tc+ta+td);
//     } 
//     ll ta = ca, tb = cb, tc = cc, td = cd, te = ce;
//     ca-=(tb+tc+td+te);
//     cb-=(ta+tc+td+te);
//     cc-=(tb+ta+td+te);
//     cd-=(tb+tc+ta+te);
//     ce-=(tb+tc+td+ta); 
//     if(ca>0 || cb>0 || cc>0 | cd>0 || ce>0){
//         cout<<n<<"\n";
//         return;
//     }  
//     sort_arr(a);
//     sort_arr(b);
//     sort_arr(c);
//     sort_arr(d);
//     sort_arr(e);
//     ll ans = 0;
//     fi(i,0,n){
//         if(ca>0 || cb>0 || cc>0 || cd>0 | ce>0){
//             ans = n-i;
//             break; 
//         }  
//         bool check = true;
//         if(a[i]<0){
//             ca-=a[i];
//             check = false;
//         }
//         if(b[i]<0){
//             cb-=b[i];
//             check = false;
//         }
//         if(c[i]<0){
//             cc-=c[i];
//             check = false;
//         } 
//         if(d[i]<0){
//             cd-=d[i];
//             check = false;
//         }
//         if(e[i]<0){
//             ce-=e[i];
//             check = false;
//         }
//         if(check) break;
//     }  
//     cout<<ans<<"\n";
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }