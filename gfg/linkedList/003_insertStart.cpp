class Solution {
  public:
    Node *insertAtFront(Node *head, int val) {
       if(head == NULL){
        return new Node(val);
       }
       Node * temp = head;
       while(temp->next!=NULL){
        temp = temp->next;
       }
       Node * insert = new Node(val);
       temp->next = insert;
//    Node(int data) { when only data insert then it point to nullptr in constructor 
    //     this->data = data;
    //     this->next = nullptr;
    // }
   
       return head;

    }
};