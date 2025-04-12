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
int k;
cin >> k;

for(int i=n-k;i<=n;i++){
   cout << i << " ";
}

for(int i=n-k-1;i>0;i--){
   cout << i << " ";
}

cout << endl;
}
}

