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


    Node *insertAtPos(Node *head, int pos, int val) {
        if(head==NULL){
            Node * newHead =  new Node(val);
            newHead->prev = nullptr;
            newHead->next = head;
            return newHead;
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
        Node * tail = head;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        Node * insert = new Node(val);
        tail->next = insert;
        insert->prev = tail;
        insert->next = nullptr;
    
        return tail;
    }
    Node * front = temp->next;
    Node * back = temp->prev;
    Node * insert = new Node(val);
    insert->next = front;
    insert->prev = temp;
    temp->next = insert;
    if(front){
        front->prev = insert;
    }
    return head;
        
    }
};