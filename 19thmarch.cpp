#include <iostream>
using namespace std;
#include <string>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
int a,b,c;
cin >> a>>b>>c;

int m=0;
if(b%3+c<3    && b%3 !=0){
  m=-1;
}

else{
    if((b%3+c)%3==0  ){
       m= a+b/3+(b%3+c)/3+((b%3+c)%3)/3; 
    }
    else{
m= a+b/3+(b%3+c)/3+((b%3+c)%3)/3+1;

    }
}

cout << m << endl;
// cout << m;

}
}

