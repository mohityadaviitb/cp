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

int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

int p[n];


// if(a[n]==1){
//     p[0]=0;
// }
// // else{
// //     p[0]=-a[0];
// // }

p[n-1]=n-a[n-1];
 int mini=INT_MAX;
for(int i=n-2;i>=0;i--){
   
        // for(int j=n-1;j>i;j--){
            if(p[i+1]<mini){
                mini=p[i+1];
            }
        // }
        
// cout << "r " << mini;
        p[i]=mini-a[i];
}








        for(int i=0;i<n;i++){
        cout << p[i] <<" ";
    }
    cout << endl;


    }
}

