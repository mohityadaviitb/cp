#include <iostream>
#include <string>
#include <cstring>
using namespace  std;
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
   
   string s;
   cin >> s;
int n=s.length();
int a=0,b=0;
for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            b++;
        }
}


  if(a>b){
    cout << "A" << endl;
  }
  else{
    cout << "B" << endl;
  }


    }

    return 0;
}
