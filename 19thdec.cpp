#include <iostream>
using namespace std;
#include <string>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
int n;
cin >> n;
string s;
cin >> s;
char a[n];
int b[26];

for(int i=0;i<n;i++){
a[i] = s[i]; 
}

for(int i=0;i<26;i++){
b[i]=0;
}
for(int i=0;i<n;i++){
  
int m = (int)a[i]-65;
b[m]++;

}
int z=0;
for(int i=0;i<26;i++){
    

    if(i+1<=b[i]){
        z++;
  
    }
}

cout << z << endl;
// cout << endl;
}
}

