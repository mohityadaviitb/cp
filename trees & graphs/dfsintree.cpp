#include<bits/stdc++.h>
using namespace std;
#define nodes 1000
vector<int>g[nodes];
int depth[nodes];
int height[nodes];  
void dfsintree(int vertex, int parent){
    //take action on the vertex after entering into the vertex -> this action is when we are going from up to down in the tree
    for(int child:g[vertex]){
        // take action on the child before entering into the child(going down the child) -> this action is when we are going from up to down in the tree
        if(child==parent){
            continue;
        } 
        depth[child] = depth[vertex]+1;
        dfsintree(child,vertex);
        // take action on child after coming(applying dfs) out of the child  -> this section is when we are coming up from down the tree
        height[vertex] = max(height[vertex], height[child]+1);
    }
    // take action on the vertex after exiting the vertex -> this action is when we are coming up from down the tree
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
    dfsintree(1,0); 
    cout<<"height    depth"<<endl;
    for(int i=1;i<=n;i++){
        cout<< height[i]<<"  "<<depth[i]<<endl;
    }
    return 0;
}