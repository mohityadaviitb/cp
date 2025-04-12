#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int tin;
    cin >> tin;

    while (tin--) {
        int n;
        cin >> n;
        int b[n];

if(n%2 !=0){

for(int i=0;i<n;i++){
    if(i%2 ==0){
            b[i] = i+1;
    }
    else{
        b[i]=n-i;
    }
}
}
else{
    for(int i=0;i<n;i++){
    if(i%2 ==0){
            b[i] = i+1;
    }
    else{
        b[i]=n-i+1;
    }
}
}



         for(int i=0;i<n;i++){
           cout << b[i] << " ";
        }
        cout << endl;



    }

    return 0;
}
