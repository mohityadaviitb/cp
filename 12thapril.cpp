#include <iostream>
#include <string>
using namespace std;


int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
      
      int n,m,k;
      cin >> n >> m >> k;

      if(n%m==0){
        if(n-n/m>k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
      }
      else
      {
         if(n-n/m-1>k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
      }

    }
    return 0;
}
