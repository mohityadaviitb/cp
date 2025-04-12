#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int qn;
    cin >> qn;
    int a[n];
      int b[n];
    int q[qn];
    int tsum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
        tsum+=a[i];
           tsum+=a[i];
    }
       for(int i=0;i<qn;i++){
        cin >> q[i];
    }
    
    int im[qn];
    int jm[qn];
      for(int i=0;i<n;i++){
       im[i]=-1 ;
    }
    
    for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
        for(int k=0;k<qn;k++){
            if(tsum-a[i]-a[j]==q[k]){
                im[k]=i;
                 jm[k]=j;
            }
        }
    } 
    // cout << qn;
   
    }
     for(int i=0;i<qn;i++){
        cout << "ram";
        if(im[i]==-1){
            // cout << -1 ;
        }
        else{
            swap(b[0],b[im[i]]);
            swap(b[n-1],b[jm[i]]);
              for(int i=0;i<n;i++){
            // cout << b[i] << " ";
        }
        }
      
        cout << endl;
    }
    
    
}

}
