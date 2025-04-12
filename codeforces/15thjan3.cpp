#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        long long int f, a, b;
        cin >> n >> f >> a >> b;

       long int moments[n];
        for (int i = 0; i < n; ++i) {
            cin >> moments[i];
        }

        long long int charge = f;
        int answer = 0;

        for (int i = 0; i < n; ++i) {
            int time_diff = (i == 0) ? moments[i] : (moments[i] - moments[i - 1]);

            if (time_diff * a <= b) {
                // It's more efficient to send a message without turning off the phone
                //  cout << "awala"<< charge << endl;

                 long long int m = a * time_diff;
                charge -= m;
                // cout << "ram "<< a << time_diff <<"sita " <<m;
                // cout << "awala"<< charge << endl;
            } else {
                // It's more efficient to turn off and on
            // cout << "bwala" << charge<< endl;
                charge -= b;
                // cout << charge;
            }

            if (charge <= 0) {
                // If the charge drops to 0, it's not possible to send all messages
                cout << "NO" << endl;
             
                // cout << charge;
                   break;
            }

            if (i == n - 1) {
                // If all messages are sent without reaching 0 charge, print "YES"
                cout << "YES" << endl;
                //  cout << charge;
            }
        }
    }

    return 0;
}
