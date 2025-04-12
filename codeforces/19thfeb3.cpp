#include <iostream>
#include <string>
#include <cstring>
using namespace  std;
#include <sstream>
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
   
int n;
cin >> n;
n++;
string a[n];
for(int i=0;i<n;i++){
    a[i]=to_string(i);
}

// cout << a[470][0];


int sum=0;
for(int i=0;i<n;i++){
    // cout << "m";
    int m=a[i].length();
    // cout << m;
    for(int j=0;j<m;j++){
sum+=a[i][j]-'0';
// cout << sum << " ";
    }

}

// cout << s[6];
// int sum=0;
// for(int i=0;i<n;i++){
//     // cout << static_cast<int>(s[i]) << " ";
// sum +=static_cast<int>(s[i]);
// }

cout << sum << endl;
    }

    return 0;
}
