/*
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
  
    Node * removeLeadingZeros(Node* head){
       while(head!=NULL && head->data == 0){
           head = head->next;
           }
           return head;
    }
  
    Node* reverseLL(Node * head){
        Node * temp = head;
        Node * prev = NULL;
        Node * front = NULL;
        
        while(temp!=NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        head = prev;
        return head;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        head1 = removeLeadingZeros(head1);
        head2 = removeLeadingZeros(head2);
        Node * h1 = reverseLL(head1);
        Node * h2 = reverseLL(head2);
        Node * dummy = new Node(-1);
        Node * dum = dummy;
        int carry = 0;
        while(h1!=NULL && h2!=NULL){
        int sum = h1->data + h2->data + carry;
        int rem = sum%10;
        carry = sum/10;
        dummy->next = new Node(rem);;
        dummy = dummy->next;
        h1 = h1->next;
        h2 = h2->next;
        }
         while(h1!=NULL){
        int sum = h1->data +carry;
        int rem = sum%10;
        carry = sum/10;
        dummy->next = new Node(rem);;
        dummy = dummy->next;
        h1 = h1->next;
        }
        
         while(h2!=NULL){
        int sum = h2->data + carry;
        int rem = sum%10;
        carry = sum/10;
        dummy->next = new Node(rem);;
        dummy = dummy->next;
        h2 = h2->next;
        }
        
        if(carry){
            dummy->next = new Node(carry);
        }
        
        return reverseLL(dum->next);
    }
};