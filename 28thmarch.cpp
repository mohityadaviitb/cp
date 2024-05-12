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
int a,b,c;
cin >> a>>b>>c;

if(a<b && b<c){
    cout << "STAIR" << endl;
}
else if(a<b && b>c){
    cout << "PEAK" << endl;
}
else{
    cout << "NONE"<< endl;
}





}

}


