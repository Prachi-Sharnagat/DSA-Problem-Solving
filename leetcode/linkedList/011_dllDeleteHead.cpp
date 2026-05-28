
Node *deleteHead(Node *head) {
    // Your code here
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node * temp = head;
    Node * prev = head;
    head = head->next; 
    head->back = NULL;
    
    delete temp;
    
    
    return head;
}
