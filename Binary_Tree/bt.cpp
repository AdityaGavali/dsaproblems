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
//level order traversal 
void bfs(tree*root){
    queue<tree*>q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        for(int i = 0;i<size;i++){
        tree* temp = q.front();
        q.pop();
        cout<<temp->key<<" ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
        }
        cout<<endl;

    }
}
//inorder 
void inorder(tree*root){
    if(root == NULL)return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
//preorder
void preorder(tree*root){
    if(root == NULL)return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}
//postorder
void postorder(tree*root){
    if(root == NULL)return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->key<<" ";
}
int main(){
    tree* root = new tree(10);
    tree* rl = new tree(20);
    tree* rr = new tree(40);
    root->right = rl;
    root->left = rr;
    root->left->left = new tree(50);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    bfs(root);
    return 0;

}