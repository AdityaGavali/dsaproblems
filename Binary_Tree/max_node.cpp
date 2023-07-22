#include<bits/stdc++.h>
using namespace std;
//applications of tree : in website development in javascript : dom , file structure , oop (inheritance)
class tree{
    public:
    int key;
    tree *left;
    tree *right;
    tree(int k){
         key = k;
         left = NULL;
         right = NULL;
    }
};
int max_node(tree*root){
    if(root == NULL)return INT_MIN;
    return max(root->key , max(max_node(root->left), max_node(root->right)));
}
int main(){
    tree* root = new tree(10);
    tree* rl = new tree(20);
    tree* rr = new tree(40);
    root->right = rl;
    root->left = rr;
    root->left->left = new tree(50);
    cout<<max_node(root);
    return 0;

}