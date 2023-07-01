#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next = NULL;
  Node*prev = NULL;
  Node(int data){
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};
void print(Node* &head){
  Node*temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;

  }
  cout<<endl;
}
int main(){
Node* node1 = new Node(10);

}