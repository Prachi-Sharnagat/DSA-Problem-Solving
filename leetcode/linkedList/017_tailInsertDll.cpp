Node *beforeTailDLL(Node * head, int val){
    Node * temp = head;
    Node * prev = head;
    while(temp){
        temp = temp->next;
    }
    prev = temp->back;
    Node * insert = new Node(val,temp,prev);
    temp->back = insert;
    insert->back = prev;

    return head;
    

}