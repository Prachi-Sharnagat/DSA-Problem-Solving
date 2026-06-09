/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node * temp1 = head;
        // o(n) total : length of double linked list 
        // not o(n**2)
        while(temp1!=NULL && temp1->next!=NULL){
            Node * temp2 = temp1->next;
            while(temp2!=NULL &&  temp1->data == temp2->data){
                Node * curr = temp2;
                temp2 = temp2->next;
                delete curr;
            }
            temp1->next =  temp2; 
            if(temp2){
               temp2->prev = temp1;
            }
            temp1  = temp1->next;
        }
        
        return head;
    }
};