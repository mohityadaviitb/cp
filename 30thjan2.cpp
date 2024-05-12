#include <iostream>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;
        int a[n];
        int b[n];

        for(int i=0;i<n;i++){
            cin >> a[i];
        }
   for(int i=0;i<n;i++){
            cin >> b[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
if(a[i]>a[j] && a[i]>a[j]){
            swap(a[i],a[j]);
             swap(b[i],b[j]);
}
            }



        }

   for(int i=0;i<n;i++){
            cout << a[i] << " " ;
        }
        cout << endl;
   for(int i=0;i<n;i++){
            cout << b[i] << " ";
        }
cout << endl;



       
  
    }

    return 0;

}
