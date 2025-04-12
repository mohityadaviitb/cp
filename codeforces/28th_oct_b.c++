#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        char a[m];
        char b[n];
        cin >> a;
        cin >> b;

        bool bl = true;
        bool bl1 = false;
        for (int i = 0; i < m - 1; i++)
        {
            if (a[i] == a[i + 1])
            {

                bl1 = true;
                break;
            }
        }

        if (bl1 == 1)
        {
            // cout << bl;
            for (int i = 0; i < n - 1; i++)
            {
                if (b[i] == b[i + 1])
                {
                    bl = false;
                    // cout << "b" << bl;
                    break;
                }
            }
        }

        if (bl == 1 && bl1 == 1)
        {
            for (int i = 0; i < m - 1; i++)
            {
                if (a[i] == a[i + 1])
                {
                    if (a[i] == b[0] || a[i] == b[n - 1])
                    {
                        bl = false;
                        // cout << "c" << bl;
                    }
                }
            }
        }

        if (bl == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

// 1
// 3 3
// 111
// 010
