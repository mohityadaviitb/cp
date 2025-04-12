#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
vector<int>vis(N,0);
vector<int>level(N);

void bfs(int source){
    level[source] = 0; 
    queue<int>q;
    q.push(source);
    vis[source] = 1;
    while(!q.empty()){
        int cur_v = q.front();
        q.pop();
        cout<<cur_v<<" "<<level[cur_v]<<"\n";
        for(auto child: g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v]+1;
            }
        }
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
    cout<<"\n\n";
    bfs(1);
    return 0;
}