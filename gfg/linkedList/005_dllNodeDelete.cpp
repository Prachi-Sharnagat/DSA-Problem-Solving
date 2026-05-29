Node * deleteTail(Node * head){
    Node * temp = head;
    Node * prev = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    prev = temp->back;
    prev->next = NULL;
    temp->next = NULL;
    temp->back = NULL;
    
    delete temp;
    return head;
}

Node * deleteHead(Node * head){
    Node * temp = head;
    head = head->next;
    head->back = NULL;
    delete temp;
    return head;
}


Node *NodeDeleteDLL(Node * head, int node){
    Node * temp = head;
    Node * prev = head;
    Node * front = head;

    if(head->data==node){
       head = deleteHead(head);
        return head;
    }
     int cnt = 0;
    while(temp){
        cnt ++;
        if(temp->data == node )  break;
        temp = temp->next; 
    }

      if(temp==NULL){
        // porition not found 
        return head;
    }

    prev = temp->back;
    front = temp->next;
    if(front==NULL){
        return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->next = NULL;
    temp->back = NULL;
    delete temp;
    return head;
    // prev->next = temp->next;

   
}