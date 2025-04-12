#include<bits/stdc++.h>
using namespace std;
#define max 1000
vector<int>g[max];
bool visited[max]; 

void dfs(int vertex){
    // take action on vertex after entering the vertex
    // if(visited[vertex]){return;}    I CAN USE THIS LINE RATHER THAN LINE 13,14
    cout<<vertex<<endl;  
    visited[vertex] = true;
    for(int child:g[vertex]){
        // take action on child before entering the node(going down into that child)
        cout<<"parent: "<<vertex<< " , child: "<<child<<endl;
        if(visited[child]){
            continue;
        }
        dfs(child);
        // take action on child after exiting the child node 
    }
    // take action on vertex before exiting the vertex
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
    int a,b;
    cin>>a>>b;
    dfs(a);
    dfs(b);
    return 0;
}