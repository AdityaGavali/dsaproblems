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
Node* insert(Node*root, int key){
    if(root == NULL) return new Node(key);
    else if(root->data<key){
        root->right = insert(root->right,key);
    }
    else if(root->data>key){
        root->left = insert(root->left,key);
    }
     return root;

}
int main(){
      Node* root = new Node(10);
      Node*left  = new Node(5);
      Node*right = new Node(30);
      root->left = left;
      root->right = right;
      cout<<root->data<<" "<<left->data<<" "<<right->data<<endl;
}