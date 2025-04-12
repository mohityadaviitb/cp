#include <iostream>
using namespace std;

string f(int a, int b) {
    if (a % 2 == 1 && b % 2 == 1) {
        return "No";
    } 
    if (a / 2 == b && b % 2 == 1) {
        return "No";
    } 
    if (b / 2 == a && a % 2 == 1) {
        return "No";
    } 
    return "Yes";
}

int main() {
    int tas;
    cin >> tas;

    while (tas--) {
        int a, b;
        cin >> a >> b;

        string results = f(a, b);

        cout << results << endl;
    }

    return 0;
}
