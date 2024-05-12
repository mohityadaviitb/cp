#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    int t;
    cin >> t;

    while (t--) {
       
        int n,k;
        cin >> n >> k;
        int z;
        
      if(k !=4*n-2 && k != 4*n-3){
        if(k%2==0){
             z=k/2;
            //  cout << "1";
        }
        else{
 z=k/2+1;
//    cout << "2";
        }
       
      }
      else if(k == 4*n-3){
 z=k/2+1;
//    cout << "3";
      }
      else if(k ==4*n-2){
         z=k/2+1;
        //    cout << "4";
       }
       cout << z<< endl;



    }

    return 0;
}
