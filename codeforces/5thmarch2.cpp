#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

bool checkSameElements(int arr[], int size) {
    // Check if all elements in the array are the same
    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[0]) {
            return false;
        }
    }
    return true;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Element not found
}

int countOccurrences(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
int n;
int z=0;
cin >> n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
    cin >> a[i];
    b[i]=0;
}


if(checkSameElements(a, sizeof(a)/sizeof(a[0]))){
    cout << 2 << endl;
    cout << 1 << " " << 1 << endl;
    cout << 2 << " " << n<< endl;
    z=-2;
}


int m=0;
for(int i=0;i<n;i++){
    int index = binarySearch(a, n, i);
    if(index ==-1){
b[m++]=i;
    }
}


int t=0;
for(int i=0;i<b[0];i++){
    int oc = countOccurrences(a, n, i);

    if(oc<2 && z!=-2){
        cout << -1 << endl;
        z=-2;
        break;
    }
    else{
        t++;
    }
}
int r=-1;
int c[n];
int k=0;
if(t==b[0]){
for(int i=0;i<b[0];i++){
for(int j=0;j<n;j++){
    if(a[j]==i){
        int temp=i;
        r=max(i,r);
            }
}
}


}

if(r==-1 && z!=-2){
      cout << -1 << endl;
        z=-2;
}

if(z !=-2){
    cout << 2 << endl;
cout << 1 << " " << r+1 << "ram" << endl;
cout << r+2 << " " << n << endl;

}




}
}

