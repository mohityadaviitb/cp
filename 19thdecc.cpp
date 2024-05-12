#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findMax(const int arr[], int size) {
    // Check if the array is empty
    if (size == 0) {
        // cerr << "Array is empty." << endl;
        return -1; // Assuming -1 as an indicator for an error or empty array
    }

    int maxVal = arr[0]; // Initialize maxVal with the first element

    // Iterate through the array starting from the second element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update maxVal if the current element is greater
        }
    }

    return maxVal;
}


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

int a[n+100];
int b[n+100];
for(int i=n;i<n+100;i++){
    a[i] = 0;
    b[i] =0;
}
for(int i=0;i<n;i++){
    cin >> a[i];
}


for(int i=0;i<n;i++){
    cin >> b[i];
}
for(int i=0;i<n+100;i++){
    // cout << b[i];
}
int x=1;
int s=a[0];
    //    cout << a[1] << endl;
int m=b[0];
int m2= b[0];
int y=1;
for(int i=1;y<k;i++){
x=i;
m2 = findMax(b,x);
m = max(a[x],m2);

    if(a[x]>=m){
        
        s += a[i];
            //    cout << s << "a" << m2<<endl;
    }
     else{
        s += m;
        // cout << s << "b" << m2<< endl;
        i--;
    }
    y++;
}



cout << s  << endl;

}
}

