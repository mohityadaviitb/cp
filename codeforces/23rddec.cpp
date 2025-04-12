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
int x[n];
int y[n];

int u=0,d=0,l=0,r=0;

for(int i=0;i<n;i++){
   cin >> x[i] >> y[i];
}

for(int i=0;i<n;i++){
if(x[i]>0){
    u++;
}
if(x[i]<0){
    d++;
}
if(y[i]>0){
    r++;
}
if(y[i]<0){
    l++;
}

}

if(l>0 && r>0 && u>0 && d>>0){
     cout << "NO" << endl;
     }

else{
     cout << "YES" << endl;
}






}
}

