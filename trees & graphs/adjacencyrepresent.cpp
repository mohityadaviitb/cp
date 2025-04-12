#include<bits/stdc++.h>
using namespace std;
#define max 1000 
// int graph[max][max];
// vector<int>graph2[max]; 
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int v1,v2;
//         cin>>v1>>v2;
//         graph[v1][v2] = 1;
//         graph[v2][v1] = 1;
//         graph2[v1].push_back(v2);
//         graph2[v2].push_back(v1);
//     }  
//     // to check if i is connected to j;
//     //in adjacency matrix  ->  O(1)
//     int i,j;
//     cin>>i>>j;
//     bool checkmatrix = false;
//     if(graph[i][j]==1){
//         checkmatrix = true;
//     }

//     // in adjacency list -> O(n)
//     bool checklist = false;
//     for(int child:graph2[i]){
//         if(child == j){
//             checklist = true;
//         }
//     }
// }


// ABOVE SAME TASKS IN CASE OF WEIGHTED GRAPHS
vector<pair<int,int>> weightedgraph[max]; 
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int n1,n2,wt;
        cin>>n1>>n2>>wt;
        weightedgraph[n1].push_back({n2,wt});
        weightedgraph[n2].push_back({n1,wt});
    }
    // to check if two nodes i and j are connected or not
    int i,j;
    cin>>i>>j;
    bool checkweighted = false;
    int weight = -1;
    for(pair<int,int> child:weightedgraph[i]){ 
        if(child.first==j){
            checkweighted = true;
            weight = child.second;
            break;
        }
    }
    cout<<weight<<endl;
}