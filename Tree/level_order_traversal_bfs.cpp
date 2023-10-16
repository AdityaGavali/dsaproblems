#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
class Node{
    public:
   int data;
   Node*left;
   Node*right;
   Node(int data){
    this->data = data;
    left = NULL;
    right = NULL;

   }
};
void level_order(Node*root){
  if(root==NULL){
    return;
  }
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    int n = q.size();
    vector<int>v;
    for(int i = 0;i<n;i++){
    Node*temp = q.front();
    q.pop();
    if(temp->left)q.push(temp->left);
    if(temp->right)q.push(temp->right);
    v.push_back(temp->data);
    }
   ans.push_back(v);
  }

}
int main(){
    Node *root = new Node(10);
    Node* left  = new Node(20);
    Node* right  = new Node(30);
    root->left  = left;
    root->right = right;
    level_order(root);
    for(int i = 0;i<ans.size();i++){
        for(int  j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}