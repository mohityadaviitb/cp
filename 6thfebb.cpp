#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
      
        int n;
        cin >> n;
        int a[n];
        int z[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            z[i] = 0;
        }

        int m = 97;

   
        string y = "";
        for(int i = 0; i < n; i++){
            y += static_cast<char>(m + z[a[i]]);
            z[a[i]]++;
        }

        cout << y << endl;
    }
    return 0;
}
