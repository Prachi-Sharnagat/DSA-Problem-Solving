/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/

class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {
        if(head==NULL){
            return NULL;
        }
    
    Node * temp = head;
    while(temp!=NULL){
        if(temp->data == x){
            Node * prevNode = temp->prev;
            Node * nextNode = temp->next;
            
            if(temp==head){
                head = head->next;
            }
            
            if(prevNode){
                prevNode->next = nextNode;
            }

            if(nextNode){
                nextNode->prev = prevNode;
            }
            
            delete temp;
            temp = nextNode;
        }
        else{

            temp = temp->next;
        }
    }
    
    return head;
        
    
    }
};



class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
       if(head==NULL){
           return NULL;
       }
       
        while(head!=NULL && head->data == x){
           Node * curr = head;
           head = head->next;
           delete curr;
       }
       
       if(head!=NULL){
           head->prev = NULL;
       }
       
      
       
       Node  * temp = head;
       while(temp!=NULL){
           if(temp->data ==  x){
               Node * back = temp->prev;
               Node * front = temp->next;
               if(back){
                back->next = front;
               }
               if(front){
                front->prev = back;
               }
            delete temp;
            temp = front;
           }
           else{
               temp = temp->next;
           }
           
           
       }
       
       return head;
        
    }
};