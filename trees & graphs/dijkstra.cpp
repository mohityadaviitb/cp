#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
const int INF = 1e5+10;
vector<pair<int,int>>g[N];
vector<int>vis(N,0);
vector<int>weight(N,INF);
 
int dijkstra(int source,int n){ 
    set<pair<int,int>>st;
    st.insert({0,source});
    weight[source] = 0;
    while(st.size()>0){
        pair<int,int> curr = *st.begin();
        st.erase(st.begin());
        int weit = curr.first;
        int val = curr.second; 
        if(vis[val]) continue;
        vis[val] = 1;    
        for(auto child:g[val]){
            int child_wt = child.second;
            int child_val = child.first;
            if(weight[val]+child_wt<weight[child_val]){
                weight[child_val] = weight[val]+child_wt;
                st.insert({weight[child_val], child_val});
            }
        }
    }  
    int ans =0;
    for(int i=1;i<=n;i++){
        if(weight[i]==INF) return -1;
        ans = max(ans, weight[i]);
    }  
    return ans;
}

int main(){
    int n,m,source;
    cin>>n>>m>>source;
    for(int i=0;i<m;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        g[a].push_back({b,wt});        // directed graph  
    } 
    cout<<dijkstra(source,n)<<"\n"; 
}