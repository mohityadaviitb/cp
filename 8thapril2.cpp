#include <iostream>
using namespace std;
#include <algorithm>


int main() {
    int tas;
    cin >> tas;

    while (tas--) {
     int n ,c, d;
     cin >> n >> c >> d;

    int a[n*n];
    for(int i=0;i<n*n;i++){
        cin >> a[i];
    }

    sort(a,a+n*n);
// cout << a[0] << " " << a[n*n-1] << endl;
// int a1=a[0];
int y=a[0];
int b[n][n];
b[0][0]=a[0];
// cout << a[0] << "m" << endl;
    for(int i=0;i<n;i++){
        
           b[i+1][0] = b[i][0]+d;
        //    cout << a[0] << "n" << endl;

         for(int j=0;j<n;j++){
      b[i][j] = b[i][0] + j*c;
    }
    }



//      for(int i=0;i<n;i++){
     
//          for(int j=0;j<n;j++){
//    cout << b[i][j] << " ";
//     }

//     cout << endl;
//     }



    int m [n*n];
int count =0;
 for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
     m[count++] = b[i][j];
    }
    }

sort(m,m+n*n);
a[0]=y;
// for(int i=0;i<n*n;i++){
//     cout << a[i] << " ";
// }
// cout << endl;
// for(int i=0;i<n*n;i++){
//     cout << m[i] << " ";
// }


int z=0;
for(int i=0;i<n*n;i++){
   if(m[i]!=a[i]){
    cout << "NO" << endl;
    z=1;
    break;
   }
}

if(z==0){
      cout << "YES" << endl;
}


    }

    return 0;
}
