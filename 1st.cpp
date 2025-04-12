#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif
#include <cmath>
#include <cstdio>
#define INT_MIN -1000007

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    int temp;
    long long int sum =0;
    for(int i= 0;i<n;i++){
        cin>>temp;
        sum+=temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int mx=INT_MIN;
    int avg = sum/n;
    for(int i=n-1;i>-1;i--){
        avg = sum/(i+1);
        int up = upper_bound(a.begin(),a.end(),avg)-a.begin();
        mx = max(mx , i-up+1);
        sum -=a[i];
    }
    cout<<mx<<endl;
}


int main() {
        Code By Mohityadav
    int t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}