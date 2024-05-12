#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;


int stringToInt(const string& str) {
    istringstream iss(str);
    int result;
    iss >> result;
    return result;
}



void moveRepeatingElementsToEnd(int arr[], int n) {
    std::sort(arr, arr + n); // Sort the array first
    int uniqueIdx = 0; // Index for unique elements
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[uniqueIdx]) { // If the current element is different from the previous unique element
            ++uniqueIdx; // Move to the next unique index
            std::swap(arr[i], arr[uniqueIdx]); // Swap the current element with the next unique element
        }
    }

    // Find the first occurrence of the repeating elements
    int firstRepeat = uniqueIdx + 1;
    // Move all repeating elements more than once to the end
    for (int i = firstRepeat; i < n; ++i) {
        if (arr[i] != arr[firstRepeat - 1]) {
            std::swap(arr[i], arr[firstRepeat]);
            ++firstRepeat;
        }
    }
}



string intToBinary(int num) {
    std::string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}


int bitwiseXOR(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result ^= arr[i]; 
    }
    return result;
}



int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        int k;
        cin >> k;
        int a[2*n];
        int d[2*n];
       
        int b[2*k];
        int c[2*k];
        int  e[2*n];
        int f[2*n];
        for(int i=0;i<2*n;i++){
            cin >>a[i];
            // e[i]=a[i];
        }


 for(int i=0;i<n;i++){
            // cin >>a[i];
            e[i]=a[i];
        }
        // cout << e[0];
         for(int i=0;i<n;i++){
            // cin >>a[i];
            f[i]=a[i+n];
        }
// cout << f[1];

           for(int i=0;i<2*n;i++){
           string t=intToBinary(a[i]);
           int m=stringToInt(t);
           d[i] = m;
        }
        

        
int r[n];
// bitwiseXOR()
int s=0;
int t=n-1;
int count =0;
sort(a, a + n); // Sort the array first
  for(int i=0;i<n;i++){
    if(a[i]==a[i+1]){
        r[t-count]=a[i];
        count++;
        r[t-count]=a[i+1];
        i++;
    }
    else{
        
    }
  }

moveRepeatingElementsToEnd(e,n);


moveRepeatingElementsToEnd(f,n);
// for()


    //   cout <<   bitwiseXOR(d, 2*n);

for(int i=0;i<n;i++){
            cout << f[i] << endl;
        }



// cout << f[1];




// cout << "m";
         for(int i=0;i<2*k;i++){
            // cout << e[i] << endl;
        }
        // cout << "m";
         for(int i=0;i<2*k;i++){
            // cout << f[i] << endl;
        }
// cout << "m";
    }

    return 0;
}
