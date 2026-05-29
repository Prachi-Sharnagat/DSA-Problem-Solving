/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
  Node * BeforeheadInsertionDLL(Node * head, int value){
    //head , next , backk
    Node * newHead = new Node(value);
    newHead->next = head;
    newHead->prev = NULL;
    head->prev = newHead;
 

    return newHead;
}

    Node *insertAtPos(Node *head, int pos, int val) {
        if(head==NULL){
            Node * newHead =  new Node(val);
            newHead->prev = nullptr;
            newHead->next = head;
            return newHead;
        }
        
          if(pos == 1 ){
        return BeforeheadInsertionDLL(head,val);
    }
    Node * temp = head;
    int cnt = -1;
    while(temp){
        cnt++;
        if(cnt==pos){
            break;  
        }
        temp = temp->next;
    }

    if(temp==NULL){
        return head;
    }
    Node * back = temp->prev;
    Node * insert = new Node(val);
    insert->next = temp;
    insert->prev = back;
    temp->prev = insert;
    back->next = insert;

    return head;
        
    }
};