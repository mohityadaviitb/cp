#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxEqualElements(vector<int>& a) {
   sort(a.begin(), a.end(),greater<int>());
    int n = a.size();
    int maxEqual = 0;
vector<int> b(n);

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(a[i]-a[j]<n){
        maxEqual++;
        }
   
}

b[i]=maxEqual;
}
sort(b.begin(), b.end(),greater<int>());
for(int i=0;i<n;i++){
  
}
return b[0];
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
auto it = unique(a.begin(), a.end());

  a.resize(distance(a.begin(), it));
   
        cout << "m"<< maxEqualElements(a)+1 << "m"<<  endl;
    }

    return 0;
}
