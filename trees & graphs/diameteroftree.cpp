#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
vector<int>depth(N);
void dfs(int val, int parent = -1){
    for(auto child:g[val]){
        if(child==parent){
            continue;
        }  
        depth[child] = depth[val] +1;
        dfs(child,val);
    }
}  
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int max_depth_node;
    int max_depth = 0;
    dfs(1);
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth = depth[i];
            max_depth_node = i;
        }
        depth[i] = 0;
    } 
    dfs(max_depth_node); 
    max_depth = 0;
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth = depth[i];
        }
    } 
    cout<<max_depth<<"\n";
    return 0;
}


// 1 2
// 1 3
// 1 13
// 2 5
// 5 6
// 5 7
// 5 8
// 8 12
// 3 4
// 4 9
// 4 10
// 10 11