
class Solution {
  public:
    Node *deleteHead(Node *head) {
        // if linkedList is empty 
        if(head==nullptr || head->next == nullptr){
            return NULL;
        }
        // minimum 2 elemment linked list should have 
        // i will  stop at second last element 
        Node * temp = head ;
        
while(temp->next->next!=NULL){
    temp = temp->next;

}      
            free(temp->next);
            temp->next = nullptr;
             return head;
        
    }
};
