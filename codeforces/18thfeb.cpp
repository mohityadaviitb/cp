#include <iostream>
using namespace std;
#include <string>

int main()
{
    int tm;
    cin >> tm;

    while (tm--)
    {
        int n;
        cin >>n;

        string s;
        cin >> s;
int s2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                continue;
            }
            else if(s[i]=='@'){
s2++;
            }
            else{
                if(s[i+1]=='*'){
                    break;
                }
            }
        }
        cout << s2 << endl;
      

  
}
}
