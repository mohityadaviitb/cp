#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k,z=0,v=0;
        cin >> n;
          string s;
        int a[n];
        //    cout << "mk";

cin >> s;
    int size = s.length();

    for (int i = 0; i < size; ++i) {
        a[i] = s[i] - '0';
    }

 












for (int i = 0; i < n; i++)
{
    if (a[i] == 0) {
        z++;
    }
    if (a[i] == 1) {
        v++;
    }
}

if (z > v) {
    cout << "YES" << endl;
} else {
    bool b = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            b = false;
            break;  // exit the loop once a difference is found
        } else {
            b = true;
        }
    }
    if (!b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}




  
}
}
