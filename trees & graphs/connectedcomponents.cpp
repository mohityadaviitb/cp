#include<bits/stdc++.h>
using namespace std;
#define max 1000
vector<int>g[max];
bool visited[max];
vector<vector<int>> connectedcomp;
vector<int>currentconnectedcomp;

void dfs(int vertex){
    visited[vertex] = true;
    currentconnectedcomp.push_back(vertex); 
    for(int child:g[vertex]){
        if(visited[child]){
            continue;
        }
        dfs(child);
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int count = 0;
    for(int i=1;i<=n;i++){
        if(visited[i]){
            continue;
        }
        currentconnectedcomp.clear();
        dfs(i);
        count++;
        connectedcomp.push_back(currentconnectedcomp);
    }
    cout<<count<<endl;
    for(auto curr_cc: connectedcomp){
        for(int vertex:curr_cc){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
} 