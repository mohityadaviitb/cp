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
        int n;
        cin >> n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
                cin >> a[i];
                sum += a[i];
        }

       if(isPerfectSquare(sum)){
        cout << "YES" << endl;
       }
        else{
        cout << "NO" << endl;
       }


        
    }

    return 0;
}
