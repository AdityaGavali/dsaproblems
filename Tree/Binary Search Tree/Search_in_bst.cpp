#include<bits/stdc++.h>
//  for recursive time complexity : O(height) , space complexity = O(height);
// for iterative time complexity : O(height) , space complexity   = O(1)

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
bool search_bst(Node*root, int key){
    if(root == NULL)return false;
    if(root->data == key) return true;
    if(root->data>key) search_bst(root->left,key);
    if(root->data<key)search_bst(root->right,key);
}
int main(){
      Node* root = new Node(10);
      Node*left  = new Node(5);
      Node*right = new Node(30);
      root->left = left;
      root->right = right;
      cout<<root->data<<" "<<left->data<<" "<<right->data<<endl;
}