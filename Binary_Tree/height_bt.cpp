//height of a binary tree 
// max no of nodes in a path from root to leaf node 
// no edges in a path from root to leaf node
#include<bits/stdc++.h>
using namespace std;
class tree{
    public:
    int key;
    tree*left;
    tree*right;
    tree(int key){
        this->key = key;
        left = NULL;
        right = NULL;
    }
};
int height_bt(tree*root){
    if(root == NULL)return 0;
    return max(height_bt(root->left), height_bt(root->right))+1;
}
int main() {
    tree*root = new tree(10);
    root->left = new tree(30);
    root->right = new tree(40);
    root->right->left = new tree(19);
    cout<<height_bt(root)<<endl;

    return 0;
    
}