// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
//         vector<int>visited(V,0);
//         vector<int>bfs_ans;
//         visited[0] = 1;
//         queue<int>q;
//         q.push(0);
//         while(!q.empty()){
//             int k = q.front();
//             q.pop();
//             visited[k] = 1;
//              bfs_ans.push_back(k);
            
//             for(auto i : adj[k]){
//                 if(!visited[i]){
//                     visited[i] = 1;
//                     q.push(i);
//                 }
//             }
//         }
//         return bfs_ans;
//     } 
// };
