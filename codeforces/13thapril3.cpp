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

        int a[n][n];
int t=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = i + 1;
            }
            t++;
        }

        for (int j = n-1; j >=0; j--)
        {
            for (int i = j-1; i >=0; i--)
            {
                a[i][j]=j+1;
            }
            t++;
        }


int s2=0;
for(int i=1;i<=n;i++){
    s2 += (2*i-1)*i;
}

cout << s2 << endl;
       
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

int s=0;
         for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s+= a[i][j];
            }
           
        }

        cout << s << endl;




    }

    return 0;
}
