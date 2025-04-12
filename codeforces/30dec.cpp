#include <iostream>
using namespace std;
#include <cmath>


bool isPerfectSquare(int num) {
    if (num < 0) {
        return false; // Negative numbers are not perfect squares
    }

    int root = static_cast<int>(sqrt(num));
    return root * root == num;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n,k;
        cin >> n >> k;
       
       int a[n];

       int m=1;
       for(int i=0;i<n;i++){
        cin >> a[i];
        m *= a[i];
       }

       int l=2023/m;
       if(l==1 ){
        cout << "YES" << endl;
        for(int i=0;i<k;i++){
            cout << 1 << " ";
        }
        cout << endl;
       }
        else if(l==7 ){
        cout << "YES" << endl;
        cout << 7 << " ";
        for(int i=0;i<k-1;i++){
            cout << 1 << " ";
        }
        cout << endl;
       }
       else if(l==17 ){
        cout << "YES" << endl;
        cout << 17 << " ";
        for(int i=0;i<k-1;i++){
            cout << 1 << " ";
        }
        cout << endl;
       }

   else if(l==119 ){



    
        cout << "YES" << endl;
        cout << 17 << " ";
        for(int i=0;i<k-1;i++){
            cout << 1 << " ";
        }
        cout << endl;
       }

else if(l==289 ){



    
        cout << "YES" << endl;
        cout << 289 << " ";
        for(int i=0;i<k-1;i++){
            cout << 1 << " ";
        }
        cout << endl;
       }

else if(l==2023 ){



    
        cout << "YES" << endl;
        cout << 2023 << " ";
        for(int i=0;i<k-1;i++){
            cout << 1 << " ";
        }
        cout << endl;
       }
        
else{
    cout << "NO" << endl;
}

    }

    return 0;
}
