#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int parent[N];
int size[N];

void make(int v){
    parent[v] = v;
    size[v] = 1;
}

int find(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v] = find(parent[v]); 
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(size[a]<size[b]){
            swap(a,b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<m;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        edges.push_back({wt,{a,b}});
    }
    for(int i=1;i<=n;i++){
        make(i);                            // if we don't havre 1,2,3,... as nodes, then run make(val[i]) rather than this.
    }
    sort(edges.begin(),edges.end());
    int total_cost = 0;
    for(int i=0;i<m;i++){
        int wt = edges[i].first;
        int u = edges[i].second.first;
        int v = edges[i].second.second;
        if(find(u)==find(v)){
            continue;
        }
        Union(u,v);
        total_cost+=wt;
        cout<<u<<" "<<v<<"\n";
    }
    cout<<total_cost<<"\n";
    return 0;
}