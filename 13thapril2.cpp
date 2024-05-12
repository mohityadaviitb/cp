#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int tas;
    cin >> tas;

    while (tas--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                t++;
            }
        }
        cout << t  << endl;
    }

    return 0;
}
