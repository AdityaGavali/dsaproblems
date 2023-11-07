#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<pair<int,int>>vec[n+1];
  for(int i = 0;i<m;i++){
      int u,v,weight;
      cin>>u>>v>>weight;
      vec[u].push_back({v,weight});
      vec[v].push_back({u,weight});
  }
  for(int i = 1 ;i<=n;i++){
      for(int j = 0;j<vec[i].size();j++){
          cout<<i<<" ->"<<vec[i][j].first<<" "<<"weight :"<<vec[i][j].second<<" "<<","<<" ";
      }
      cout<<endl;
  }
    return 0;
}
