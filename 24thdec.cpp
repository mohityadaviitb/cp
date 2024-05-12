#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int findMax(const int arr[], int size) {
    
    if (size == 0) {
        
        return -1; 
    }

    int maxVal = arr[0]; 

   
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; 
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
  int a[n];
  
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
int m=0;
int p=0;

  for(int i=0;i<n;i++){

    if(a[i]==0){
        p++;
    }

   if(a[i]<0){
        m++;
   }
   
  }

  if(m%2 != 0){
    cout << 0 << endl;
  }
  else{
    if(p==0){
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;
    }

    else{
         cout << 0 << endl;

    }
   
  }




}
}

