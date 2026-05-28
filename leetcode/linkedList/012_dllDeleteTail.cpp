// way 01 
Node * deleteTail(Node * head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }

    Node * temp = head;
    Node* prev = head;

    while(temp->next->next !=NULL){
        temp = temp->next;
    }

    Node * tail = temp->next;

    // temp->back = NULL;
    temp->next = NULL;
    tail->next = NULL;
    tail->back = NULL;
    delete tail;

    return head;



}

// way two
Node * deleteTail(Node * head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }

    Node * temp = head;
    Node* prev = head;

    while(temp->next!=NULL){
        temp = temp->next ;
    }

    prev = temp->back;
    prev->next = nullptr;
    temp->next = NULL;
    temp->back = NULL;
    delete temp;

    return head;



}