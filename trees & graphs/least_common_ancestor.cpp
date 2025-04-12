#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N]; 
vector<int>parent(N); 
void dfs(int val, int par=-1){
    parent[val] = par;
    for(auto child: g[val]){
        if(child==par) continue;
        dfs(child,val); 
    }  
} 
vector<int> path(int val){
    vector<int>ans;
    while(val!=-1){
        ans.push_back(val);
        val = parent[val];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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
    dfs(1);
    int x,y;
    cin>>x>>y; 
    vector<int> pathx = path(x);
    vector<int> pathy = path(y);
    int k = min(pathx.size(),pathy.size());
    int lca = -1;
    for(int i=0;i<k;i++){
        if(pathx[i]==pathy[i]){
            lca = pathx[i];
        }
        else{
            break;
        }
    }
    cout<<lca<<"\n";
    return 0;
}