// #include<bits/stdc++.h>

using namespace std;

void removeDuplicates(int arr[], int& n) {
    if (n == 0) return;
    
    // Sort the array
    std::sort(arr, arr + n);

    // Remove duplicates
    int j = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[j]) {
            arr[++j] = arr[i];
        }
    }

    // Update the size of the array
    n = j + 1;
    
    // cout << n << "r";
    for(int i=0;i<n+1;i++){
            // cout << arr[i] << endl;
        }
}




int countNonDuplicateElementsLessThanK(int arr[], int n, int k) {
    unordered_set<int> seen;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= k && seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            count++;
        }
    }
    return count;
}




int main() {
    int t;
    cin >> t;
    
    while (t--) {
      
        int n,m,k;
        cin >> n >> m >>k;
        int a[n];
        int b[m];
        int c[n+m];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
            for(int i=0;i<m;i++){
            cin >> b[i];
        }
     

int nn=0;
int nm=0;

for(int i=0;i<n;i++){
    if(a[i]<=k){
        c[nn+nm]=a[i];
        nn++;
    }
}

for(int i=0;i<m;i++){
    if(b[i]<=k){
        c[nn+nm]=b[i];
        nm++;
    }
}

int ram = nn +nm;
removeDuplicates(c,ram);
// cout << nn << nm;

// cout << "m" << ram << "m";


int nk = countNonDuplicateElementsLessThanK(a,n,k);
int mk = countNonDuplicateElementsLessThanK(b,m,k);

// cout << "r" << nk << mk << "r";

for(int i=ram;i<n+m;i++){
           c[i]=0;
        }

if(c[k-1]==k && nk>=k/2 && mk>=k/2){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}

    }
    return 0;
}
