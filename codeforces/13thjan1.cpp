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
cin >> n;
int a[n];
int x[n];
int i=0;
long long int mx=100000000000;
long long int mn=-100000000000;
int nx=0;
int h;
int j;
int k=0;

for(i=0;i<n;i++){
    cin >> h;
    if(h==1){
        cin >> j;
        if(j>mn){
            mn=j;
        }
    }
      else if(h==2){
        cin >> j;
        if(j<mx){
            mx=j;
        }
    }
    else{
        cin >> x[k++];
    }
//   cout << mx <<"ok" << mn << endl;
}

// cout << "ram";
for(int j=0;j<k;j++){
    if(x[j]<=mx && x[j]>=mn){
nx++;
// cout << "mx" << x[j] << "&" << mx << "&" << mn << "hai";
    }
}
// cout << "kkivalue" << k << "hai";
// cout << "nxkivalue" << nx << "hai";
if(mx<mn){
    cout << 0 <<endl;
}
else {
cout << mx-mn+1-nx << endl;
}

// cout << "khatam" << endl;
}
}

