#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
       
        cin >> s;
        // int n = s.length();
        //  int a[n];
         char c = s[0];
           int n = static_cast<int>(s[1])-48;

for(int i=0;i<9;i++){
    if(i==5){
        continue;
    }
   
            cout << c << i << endl;
       
    }


  char nc = static_cast<char>(n);

for(int i=1;i<9;i++){
    if(static_cast<char>(96)+i==c){
        continue;
    }
//   cout << n;
char m = static_cast<char>(96)+i;
            cout << m << n << endl;
       
    }
}
}

