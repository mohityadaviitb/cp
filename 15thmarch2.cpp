#include <iostream>
#include <cmath>

using namespace std;

bool solve(int n){


  int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }


      for(int i=0;i<n-1;i++){



int t=a[n-1];

    for(int i=n-2;i>=0;i--){
        if(a[i]>t){
            // cout << "m";
            if(a[i]/10>a[i]%10){
                return false;
            }
            else if(a[i]%10>t){
                return false;
            }
            else{
                t= t=a[i]/10;
                continue;
            }
        }





        t=a[i];
    }
















    //     if(a[i]/10==0 && a[i+1]/10==0){
    //         if(a[i]>a[i+1]){
    //              cout << "M";
    //             return false;
              
    //         }
            
    //     }

 

    //        if(a[i]/10!=0 && a[i+1]/10!=0){
    //         if(a[i]>a[i+1]){
    //             return false;
                 
    //         }
            
    //     }

    //         if(a[i]/10!=0  && a[i+1]/10==0 ){
    //        if(a[i]/10>a[i+1] || a[i]%10>a[i+1]){
    //             return false;
    //             //  cout << "ram";
    //         }
            
    //     }


    //   if(a[i]/10==0  && a[i+1]/10!=0 && a[i+1]%10 !=0){
    //        if(a[i]/10>a[i+1] || a[i]%10>a[i+1]){
    //             return false;
    //             //  cout << "ram";
    //         }
            
    //     }

    //     //    if(a[i]/10==0 && a[i+1]/10!=0 && a[i+1]/10 !=0 && i !=n-1 ){
    //     //     if((a[i+1]/10<a[i] || a[i+1]%10<a[i]) || (a[i+1]/10>a[i+2] || a[i+1]%10>a[i+2])){
    //     //         return false;
    //     //         //  cout << "ram";
    //     //     }
            
    //     // }

    //        if(a[i]/10==0 && a[i+1]/10!=0 && a[i+1]/10 ==0 && i !=n-1 ){
    //         if((a[i+1]/10<a[i] || a[i+1]%10<a[i]) || (a[i+1]/10>a[i+2] || a[i+1]%10>a[i+2])){
    //             return false;
    //             //  cout << "ram";
    //         }
            
    //     }
      
           
        


//   cout << "M";


      }
    
 return true;

    }











int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n; cin >> n;
     bool m = solve(n);


    if(m==true){
        cout << "YES" << endl;
    }
     if(m==false){
        cout << "NO" << endl;
    }


}


}
