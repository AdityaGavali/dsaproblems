#include<bits/stdc++.h>
using namespace std;
//operations : insertion : creating new node 
// pop : remove the head element 
//top : head element 
//size of stack : traverse
// if head == null : stack is empty 
class Node{
    int val;
    Node*next = NULL;
    Node(int val , Node* temp){
        this->val = val;
        next = temp;
    }
};
int main(){
    Node* head;
    head.val = 2;
    cout<<head.val;
}