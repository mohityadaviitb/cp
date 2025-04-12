#include <bits/stdc++.h>
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;

void mk(){
    ll n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    set<char> st;

    for (ll i = 0; i < n; i++)
    {
        st.insert(str[i]);
    }

    if (k == 0)
    {



        
        string str2 = string(str.rbegin(), str.rend());
        if (str < str2)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    ll i = 0;
    ll j = n - 1;

    while (i < j)
    {
        if (str[i] < str[j])
        {
            cout << "YES" << endl;
            i++;
            j--;
            return;
        }
        else if (str[i] > str[j])
        {
            if (k != 0)
            {
                cout << "YES" << endl;
                i++;
                j--;
                return;
            }
        }
        else
        {
            i++;
            j--;
            continue;
        }
    }

    if (st.size() <= 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}


int main()
{
    ll tttt = 1;
    cin >> tttt;
    while (tttt--)
    {
       mk();
    }
    return 0;
}
