#include<bits/stdc++.h>
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
void print_nodes_at_k_distance(Node* root , int k ){
    if(root== NULL)return;
    if(k == 0)cout<<root->data<<endl;
    else{
        print_nodes_at_k_distance(root->left,k-1);
        print_nodes_at_k_distance(root->right,k-1);
    }
}
int main(){
      Node* root = new Node(10);
      Node*left  = new Node(20);
      Node*right = new Node(30);
      root->left = left;
      root->right = right;
      cout<<root->data<<" "<<left->data<<" "<<right->data<<endl;
}