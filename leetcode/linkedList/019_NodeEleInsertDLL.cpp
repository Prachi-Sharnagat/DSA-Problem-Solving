Node * BeforeheadInsertionDLL(Node * head, int value){
    //head , next , backk
    Node * newHead = new Node(value, head, nullptr);
    head->back = newHead;

    return newHead;
}


Node * beforeNodeInsert(Node* head, int node, int val){
    if(head->data == node){
        return BeforeheadInsertionDLL(head,val);
    }
    Node * temp = head;
    // int cnt = 0;
    while(temp){
        if(temp->data==node){
            break;  
        }
        temp = temp->next;
    }

    if(temp==NULL){
        return head;
    }
    Node * prev = temp->back;
    Node * insert = new Node(val,  temp, prev);
    temp->back = insert;
    prev->next = insert;

    return head;

}