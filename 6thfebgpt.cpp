#include <iostream>
#include <string>
using namespace std;


int main() {
    int testCases;
    cin >> testCases;
    
    // Looping through each test case
    while (testCases--) {
        // cout << "ram";
      int n;
      cin >> n;
      int a[n];
      int b[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=0;
      }


int m=97;

// cout << "ram";
    string s="";
    for(int i=0;i<n;i++){
     s += static_cast<char>(m+b[a[i]]);
     b[a[i]]++;
    }

cout << s << endl;

    }
    return 0;
}
