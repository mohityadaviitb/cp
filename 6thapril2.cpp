#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {

int n,k;
cin >> n >> k;

k-=1;
int r=k;
int k2=k;
int a[n];
int b[n];
for(int i=0;i<n;i++)
{
    cin >> a[i];
      b[i]=a[i];
}

int m=0;
int m2=0;
int z=0;
if(k!=0){

for(int i=0;i<n;i++){


if(a[i]>a[k] && i<k){
        z=i;
       
        break;

}



}

//  cout << "z" << z << endl;
// if(k-z>z){
//     swap(a[0],a[k]);
//     k=0;
// }
// else{
//     swap(a[z],a[k]);
//     k=z;
// }



  swap(b[z],b[k2]);
 k2=z;
 swap(a[0],a[k]);
 k=0;


}



for(int i=k;i<n;i++){

if(k==0 && i==0){
    continue;
}

// cout << i << k << a[i] << " " << a[k]  <<" "<< m << endl;
if(a[i]<a[k]){
    m++;
    
}
else{
    break;
}

}

if(r!=0){
    if(z!=0){
m2=1;
    }


for(int i=k2+1;i<n;i++){

if(k2==0 && i==0){
    continue;
}

// cout << i << k2 << b[i] << " " << b[k2]  <<" "<< m2 << endl;
if(b[i]<b[k2]){
    m2++;
    
}
else{
    break;
}

}
}




cout << max(m,m2) <<endl;

}
}
