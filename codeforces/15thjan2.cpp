#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of boxes

        string initial_state, desired_state;
        cin >> initial_state >> desired_state; // Initial and desired states

        int cats_initial = 0, cats_desired = 0;
        int operations = 0;
int m=n;
int initial=0,desired=0;
     for (int i = n - 1; i >= 0; --i) {
        if(initial_state[i] == '1'){
            initial++; 
        }
        if(desired_state[i]=='1'){
            desired++;
        }
     }


        // Iterate through the boxes in reverse order
        for (int i = n - 1; i >= 0; --i) {
            if (desired_state[i] == initial_state[i]) {
             m--;
            }
             else {
                if (initial_state[i] == '1' && desired_state[i]=='0' ) {
                  
                    operations++; // Remove a cat from the box
                }
                 if (initial_state[i] == '0' && desired_state[i]=='1' ) {
                  
                    operations++; // Remove a cat from the box
                }
            }
        }

        // Additional operations to move cats between boxes
        operations -= abs(desired-initial);
        operations /= 2;
int ans =abs(desired-initial) + operations;
// cout << "ram" << abs(desired-initial)<< operations << endl;
        cout << ans << endl;
    }

    return 0;
}
