/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node * insertionStart(Node * head, int val){
        Node * newHead = new Node(val); 
        newHead -> next = head;
        return newHead;
    }
  
    Node * reverseLL(Node * head){
         Node * temp = head;
         Node * front = NULL;
         Node * prev = NULL;
         
        
        while(temp!=NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        head = prev;
        return head;
    }
  
    Node* addOne(Node* head) {
    //   Node * dummy = new Node(-1);
    //   Node * dum = dummy;
       Node * temp = head;
        
      Node * headNew = reverseLL(head);
        temp = headNew;
        while(temp != NULL){
            if(temp->data < 9){
                temp->data = temp->data + 1;
                return reverseLL(headNew);
            }
            temp->data = 0;
            temp = temp->next;
        }
        
     Node * finalHead = insertionStart(headNew,1);
       
       return finalHead;
    //   return dum->next; 
    }
};