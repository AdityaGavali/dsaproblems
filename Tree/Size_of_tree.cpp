#include<bits/stdc++.h>
// time comp = O(n) , space = O(n)
using namespace std;
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
int size_of_tree(Node* root){
    if(root == NULL)return 0;
    return 1 + size_of_tree(root->left) + size_of_tree(root->right);
}
int main(){
      Node* root = new Node(10);
      Node*left  = new Node(20);
      Node*right = new Node(30);
      root->left = left;
      root->right = right;
      cout<<root->data<<" "<<left->data<<" "<<right->data<<endl;
}