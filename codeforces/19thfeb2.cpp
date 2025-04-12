#include <iostream>
#include <string>
#include <cstring>
using namespace  std;
#include <sstream>
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
   
int n;
cin >> n;
char  a[n][n];
for(int i=0;i<n;i++){
 
for(int j=0;j<n;j++){
cin >> a[i][j];
}
}
int b[n];
for (int i=0;i<n;i++){
  b[i]=0;
}
int t=0;
int r=0;
// cout << "ram";

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    if(a[i][j]=='1'){
        t++;
        // cout << "r" << i << j << "r";
    }

}
b[i]=t;
t=0;
}



int m=0;
for (int i=0;i<n-1;i++){
    // cout << b[i] << b[i+1] << endl;
    if(b[i]!=0 && b[i+1]!=0  && (b[i] !=b[i+1])){
        cout << "TRIANGLE" << endl;
        m++;
       break;
    }
 

     
    
}
if(m==0){
   cout << "SQUARE" << endl;

}
       

    }

    return 0;
}
