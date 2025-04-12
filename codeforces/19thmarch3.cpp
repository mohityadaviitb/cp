#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
int n;
cin >> n;
string s;
cin >> s;
int a[n];
for(int i=0;i<n;i++){
    a[i]= s[i] - '0';
}

float b[n];
float sum=0.0;
for(int i=0;i<n;i++){
   if(a[i]==0){
    sum++;
  
   }
     b[i]=sum;
}

for(int i=0;i<n;i++){
    b[i] = b[i]/(i+1); 
}

// // cout << b[0];
// for(int i=0;i<n;i++){
//    cout << b[i] << endl;
// }





int c[n];
for(int i=0;i<n;i++){
    if(b[i]>=0.5){
        c[i]= 1;
    }
    else{
        c[i]=0;
    }
}

for(int i=0;i<n;i++){
   cout << c[i] << endl;
}

float ans=2*n;
int mk=0;
for(int i=0;i<n;i++){
    if(c[i]==1){
    cout << abs((float(n)/2)-i-1);
     if( ans>abs((float(n)/2)-i-1)){
        ans=abs((float(n)/2)-i-1);
        mk=i;
     }
    }
}

cout <<"m"<<mk+1<<"m" << endl;

}

}


