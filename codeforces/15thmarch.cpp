#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n; cin >> n;
        if(n%2==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;

            for(int i=0;i<n/2;i++){
                cout << "AA" <<"B";
            }
            cout << endl;
        }


    }

    return 0;
}
