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


if(a[0]==1){
    p[0]=0;
}
else{
    p[0]=-a[0];
}










for(int i=1;i<n;i++){
        int z=0;
      
for(int j=0;j<n;j++){
    p[i] = j;
  int r=0;
        for(int k=0;k<=i;k++){
            cout << "i" << i << "j" << j << "k" << k;
            if(j==p[k]){
                break;
            }
           else if(k==i-1){
            z=j;
            r=1;
            break;
           }
        }

int q=1;
cout << "z" << z << endl;
//         for(int m=0;m<i;m++){
//   if(p[m] == z-a[i] && z-a[i]<0){
//     q=0;
//         break;
//     }
//         }


        if(q==1 && r==1){
            break;
        }
  
        



}

p[i] = z-a[i];

}


        for(int i=0;i<n;i++){
        cout << p[i] <<" ";
    }
    cout << endl;


    }
}

