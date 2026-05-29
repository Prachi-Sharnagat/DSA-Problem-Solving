/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
  
  Node * deleteTail(Node * head){
    Node * temp = head;
    Node * back = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    back = temp->prev;
    back->next = NULL;
    temp->next = NULL;
    temp->prev = NULL;
    
    delete temp;
    return head;
}

Node * deleteHead(Node * head){
    Node * temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}

    Node* delPos(Node* head, int pos) {
        Node * temp = head;;
        Node * back = head;
        Node * front = head;
    if(head==nullptr){
        return NULL;
    }

  else if(head->next==NULL && pos == 1){
        delete head;
        return NULL;
    }

   else if(pos==1){
       head =  deleteHead(head);
        return head;
    }
    
else {
     int cnt = 0;
    while(temp){
        cnt ++;
       if(cnt==pos){
           break;
       }
        temp = temp->next; 
    }
    
    if(temp==NULL){
        // porition not found 
        return head;
    }

    back = temp->prev;
    front = temp->next;
     if(front == NULL){ // tail delet kar rahe the 
     return deleteTail(head);
    }
    
    back->next = front;
    front->prev = back;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
    return head;
    // prev->next = temp->next;
    

    }
    }
};