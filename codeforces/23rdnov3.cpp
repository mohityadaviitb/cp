#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to get divisors of a number
vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        long long m;
        cin >> x >> m;

        vector<int> divisors = getDivisors(x);
        int count = 0;

        for (int z : divisors) {
            int y = x ^ z; // Calculate y
            if (y >= 1 && y <= m && y != x) {
                if (z % x == 0 || y % z == 0) { // Check if z is a divisor of x OR y
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}