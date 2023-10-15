#include<bits/stdc++.h>
using namespace std;
// BFS : level order traversal
// DFS : inorder , preorder , post order 
class Node{
      public:
      int data; 
      Node*right;
      Node*left;
      Node(int data){
        this->data = data;
        right = left = NULL;
      }
};
void inorder(Node* root){
    if(root == NULL)return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL)return;
    cout<<root->data<<endl;
    inorder(root->left);
    inorder(root->right);
}
void postorder(Node* root){
    if(root == NULL)return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<endl;
}
int main(){
     
     
     return 0;
}