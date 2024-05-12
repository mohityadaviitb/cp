#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    int count = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1]) {
            count++;
            i++; 
            cout << "a" << i;
        }
    }

    if (s[n - 2] != s[n - 1]) {
        count++;
        cout << "b" ;
    }

    cout << max(1, count) << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
