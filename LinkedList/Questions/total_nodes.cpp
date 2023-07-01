// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.
class Node{
    public:
    int data ;
    Node* next;
};
int getCount(struct Node* head)
    {
        int c = 0;
        while(head !=  nullptr){
            head = head->next;
            c++;
        }
        return c;
    }
    