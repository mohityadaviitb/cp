#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
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
#define MODE 1000000007





void solve(){
 int n;
    cin>>n;
    vector<int> s(n);
    int temp;
    map<int , int> mp;
    for(int i= 0 ; i<n;i++){
        cin>>temp;
        s[i] = temp-i;
        mp[s[i]]+=temp;
    }
    int mx = INT_MIN;
    for(auto it:mp){
        mx= max(mx , it.second);
    }
    cout<<mx<<endl;
}

int main() {
   
   solve();
    return 0;
}