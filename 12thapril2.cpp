#include <iostream>
#include <string>
using namespace std;


int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
      
        int n;
        cin >> n;

    int a[n];
    int b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        int m=0;
        int t= a[0];
         for(int i=0;i<n;i++){
           if(a[i]==t){
            m++;
           }
        }

        if(m==n){
            cout << -1 << endl;
        }
        else{
            int m=0;
            int t=INT_MAX;
            for(int i=0;i<n;i++){
                if(a[i]!=a[0])
                {
                    t= min(t,i-m);
                    m=i+1;
                }
            }
                int t1=0;
                int m1=0;
                for(int i=n-1;i>=0;i--){
                if(a[i]!=a[0]){
                   t1=i;
                    break;
                }
            }            
  
            // cout << t << t1;
            cout << min(t,n-t1-1) << endl;
        }

    }
    return 0;
}













