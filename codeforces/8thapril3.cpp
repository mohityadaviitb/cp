#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int tas;
    cin >> tas;

    while (tas--)
    {

        long long int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int s = 0;
        int e = n - 1;

        int q = 0;

        if (n == 1)
        {
            cout << a[0] - k << endl;
            q = 4;
        }

        if (n == 2)
        {

            while (k != 0 && (a[0 != 0 || a[1] != 0]))
            {
                int b = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != 0)
                    {
                        b = 1;
                    }
                }
                if (b == 0)
                {
                    break;
                }

                if (a[s] == 0)
                {
                    s++;
                }
                a[s] -= 1;
                k--;

                if (k == 0)
                {
                    break;
                }
                b = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != 0)
                    {
                        b = 1;
                    }
                }
                if (b == 0)
                {
                    break;
                }
                if (a[e] == 0)
                {
                    e--;
                }
                a[e] -= 1;
                k--;

                //        for(int i=0;i<n;i++){
                //         cout << a[i];
                //       }
                // cout << endl;
            }
        }

        while (q != 4 && k != 0 && !(a[s] == 0 && a[e] == 0 && (a[s + 1] == 0 || a[e - 1] == 0)))
        {
            int b = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    b = 1;
                }
            }
            if (b == 0)
            {
                break;
            }

            if (a[s] == 0)
            {
                s++;
            }
            a[s] -= 1;
            k--;

            if (k == 0)
            {
                break;
            }
            b = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    b = 1;
                }
            }
            if (b == 0)
            {
                break;
            }
            if (a[e] == 0)
            {
                e--;
            }
            a[e] -= 1;
            k--;

            //        for(int i=0;i<n;i++){
            //         cout << a[i];
            //       }
            // cout << endl;
        }
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 0)
            {
                count++;
            }
        }
        if (q != 4)
        {
            cout << count << endl;
        }
    }

    return 0;
}
