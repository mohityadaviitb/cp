#include<bits/stdc++.h>
using namespace std;
#define max 1000
vector<int>g[max];
bool visited[max];

bool dfs(int vertex, int parent){
    visited[vertex] = true;
    bool iscycleexists = false; 
    for(int child:g[vertex]){
        if(visited[child]&&child == parent){ 
            continue; 
        }
        if(visited[child]){
            return true;
        }
        iscycleexists |= dfs(child,vertex);
    }
    return iscycleexists;
} 

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    bool answer = false;
    for(int i=1;i<=n;i++){
        if(visited[i]){
            continue;
        }
        if(dfs(i,0)){
            answer = true;
            break;
        }
    }
    cout<<answer;
}