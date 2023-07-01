#include<bits/stdc++.h>
//LINKEDLIST: DYNAMIC NATURE 
using namespace std;
//CLASS TO MAKE LINKEDLIST NODES 
class Node{
    public: 
    int data;
    Node* next;
    //constructor
    Node(int data){
this->data = data;
this->next = NULL;
    }
  
};
//INSERT AT HEAD OR START
void insertAthead(Node* &head , int d){
  Node*temp = new Node(d);
  temp->next = head;
  head = temp;
}
//INSERT AT TAIL OR END
void insertAttail(Node* &tail , int d){
     Node*temp =new Node(d);
     tail->next = temp;
     tail = tail->next;
}
//INSERT AT GIVEN POSITION 
void insertAtposition(Node* &head , Node*tail, int position , int data){
    //to handle starting 
    if(position == 1){
        insertAthead(head,data);
        return;
    }
  

Node*temp = head;
Node*newnode = new Node(data);
int cnt = 1;
while(cnt <position-1){
    temp = temp->next;
    cnt++;
}
  //to handle end (as we should update tail )
  if(temp->next == NULL){
    insertAttail(tail,data);
    return;
  }
Node*nextnode = temp->next;
temp->next = newnode;
newnode->next = nextnode;
}
//DELETE A NODE BY POSITION
void deletebyposition(int position , Node*head){
    //handling to delete node at begin
    if(position == 1){
        Node*temp = head;
        head = temp->next;
    
        delete head;
    }
    else{
         
    }
    
}
//PRINTING THE LINKEDLIST
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
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

Node* head = node1;
Node* tail = node1;
print(head);
insertAthead(head,12);
insertAttail(tail,22);
print(head);
insertAtposition(head,tail ,2,34);
insertAtposition(head,tail,3,3);
insertAtposition(head,tail,1,2);
print(head);
deletebyposition(1,head);
print(head);

}

//singly linkedlist 