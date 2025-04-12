// QUESTION LINK - https://vjudge.net/problem/CodeChef-REVERSE

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e5+10;
vector<pair<int,int>> g[N];
vector<int> level(N, INF);
int bfs(int val,int n){
    deque<int>dq; 
    dq.push_back(val);
    level[val] = 0;
    while(!dq.empty()){
        int curr = dq.front();
        dq.pop_front();
        for(auto child: g[curr]){  
            int child_val = child.first;
            int wt = child.second;
            if(level[curr]+wt<level[child_val]){
                level[child_val] = level[curr]+wt;
                if(wt==1){
                    dq.push_back(child_val);
                }
                else{
                    dq.push_front(child_val);
                }
            }
        }
    }
    return level[n] ==INF ? -1 : level[n]; 
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back({b,0});
        g[b].push_back({a,1});
    }
    cout<<bfs(1,n)<<"\n";
    return 0;
}