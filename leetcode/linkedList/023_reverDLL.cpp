/* Structure of doubly linked list node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
       if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
     Node * temp = head;
     Node  * last = NULL;
     while(temp!=NULL){
        last = temp->prev;
        temp->prev = temp->next;
        temp->next = last;
        temp = temp->prev;
     }
    head = last->prev;
     return head;
    }
};