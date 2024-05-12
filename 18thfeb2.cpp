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
        cin >>n;

       int a[n];
       for(int i=0;i<n;i++){
        cin >> a[i];
       }

        int sum=a[0];
       for(int i=1;i<n;i++){
        int t=a[i];
        if(a[i]<=sum){
         
            while(t<=sum){
                t+=a[i];
            }
           
            sum=t;
            
        }
        else{
            sum=a[i];
        }
     
       }
       cout << sum<<endl;
      

  
}
}
