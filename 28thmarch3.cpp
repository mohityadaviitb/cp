#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

string s;
cin >> s;

int n = 10*(s[0]- '0')+(s[1]- '0');

if(n<12 && n!=0){
    cout << s << " " << "AM" << endl;
}
else if(n==12){
    cout << s << " " << "PM" << endl;
}
// cout << n;
else if(s[0]==0 && s[1]==0){
    // int m=             n-12;
    s[0]=      static_cast<char>(1 + '0')      ;
    s[1]=  static_cast<char>(2 + '0');
// cout << n;
    cout <<s << " " << "AM" << endl;
}

else{
    int m=             n-12;
    s[0]=      static_cast<char>(m/10 + '0')      ;
    s[1]=  static_cast<char>(m%10 + '0');
// cout << n;
    cout << s << " " << "PM" << endl;
}



    }
}

