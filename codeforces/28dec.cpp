#include <iostream>
using namespace std;

int findUniqueValue(int a, int b, int c) {
    if (a == b) {
        return c;
    } else if (a == c) {
        return b;
    } else {
        return a;
    }
}

int main() {

        int t;
    cin >> t;

    while (t--)
    {
    int a, b, c;
    
    // Input the three digits
    // std::cout << "Enter three digits (separated by spaces): ";
    std::cin >> a >> b >> c;

    // Find and print the unique value
    int uniqueValue = findUniqueValue(a, b, c);
   cout << uniqueValue << endl;

    // return 0;
}
}
