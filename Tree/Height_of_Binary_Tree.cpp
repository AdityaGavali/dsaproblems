#include<bits/stdc++.h>
//time comp = O(n) , space = O(n)
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
int height_of_bt(Node* root){
    
    if(root == NULL)return 0;
    return max(height_of_bt(root->left), height_of_bt(root->right)) + 1;
}
int main(){
      Node* root = new Node(10);
      Node*left  = new Node(20);
      Node*right = new Node(30);
      root->left = left;
      root->right = right;
     cout<<height_of_bt(root)<<endl;
}