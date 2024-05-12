#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main()
{
   long long int t;
    cin >> t;

    while (t--)
    {
       long long int n,m;
        cin >>n >> m;

       long long int a[n];
       long long int z=1;

       for(long long int i=0;i<n;i++){
        cin >> a[i];
       }

// sort(a,a+n);

for(int i=0;i<n;i++){
    z*=a[i];
 
}


       string s;
       cin >> s;

   
 

long long int l=0;
long long int r=n-1;
    
       for(long long int i=0;i<n;i++){
        cout <<z%m << " ";
   if(s[i]=='L'){
    z/=a[l];
    l++;
   }
   else{
    // cout << "p"<<z << "p";
    // cout << a[r];
    z/=a[r];
    // cout << "b"<<z << "b";
    r--;
   }
     
       }
       cout <<endl;
      

  
}
}
