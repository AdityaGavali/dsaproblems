
// //Adjacency Matrix 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m; // n : no of nodes , m : no of edges 
//     cin>>n>>m;
//     int adj[n+1][m+1]; // n square space + O(n) time complexity 
//     for(int i = 0;i<m;i++){
//         int u,v;         
//         cin>>u>>v;
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     }
//     return 0;
// }
// //so adjacency matrix is taking to much space  , so we use  adjacency list 

//Adjacency List 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; // n : no of nodes , m : no of edges 
    cin>>n>>m;
    vector<int>adj[n+1]; //vector of list 
    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        int weight;
        cin>>weight;
      adj[u].push_back(v);
      adj[v].push_back(u);
      //for directed only use adj[u].push_back(v); skip next line
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<adj[i].size();j++){
            cout<<adj[i][j];
        }
    }
    return 0;
}
