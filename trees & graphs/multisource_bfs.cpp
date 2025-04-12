#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
const int INF = 1e5+10;
int g[N][N];
int vis[N][N];
int level[N][N];
int n,m;
vector<pair<int,int>> movements = {{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1}};
bool isValid(int i, int j){
    return (i>=0 && i<n && j>=0 && j<m);
}
void reset(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]=0;
            level[i][j] = INF;
        }
    }
} 
int bfs(){
    int mx = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]>mx){
                mx = g[i][j];
            }
        }
    }
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mx==g[i][j]){
                q.push({i,j});
                level[i][j] = 0;
                vis[i][j] = 1;
            } 
        }
    } 
    int ans = 0;
    while(!q.empty()){
        pair<int,int> curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;
        for(auto movement: movements){
            int nextX = x + movement.first;
            int nextY = y + movement.second;
            if(!isValid(nextX, nextY)){
                continue;
            }
            if(!vis[nextX][nextY]){
                q.push({nextX, nextX});
                vis[nextX][nextY] = 1;
                level[nextX][nextY] = level[x][y] + 1;
                ans = max(ans, level[nextX][nextY]);
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        reset();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>g[i][j];
            } 
        }
        cout<<bfs()<<"\n";
    }
}