//size of a tree : total no of nodes 

#include<bits/stdc++.h>
using namespace std;
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
int getsize(tree*root){
    if(root == NULL)return 0;
    return 1+getsize(root->left)+getsize(root->right);
}

int main(){
    tree* root = new tree(10);
    tree* rl = new tree(20);
    tree* rr = new tree(40);
    root->right = rl;
    root->left = rr;
    root->left->left = new tree(50);
    cout<<getsize(root)<<endl;
   
    return 0;

}