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


Node *kthDeleteDLL(Node * head, int pos){
    Node * temp = head;;
    Node * prev = head;
    Node * front = head;
    if(head==nullptr){
        return NULL;
    }

  else if(head->next==NULL && pos == 1){
        delete head;
        return NULL;
    }

   else if(pos==1){
       head = deleteHead(head);
        return head;
    }
    
else {
     int cnt = 0;
    while(temp){
        cnt ++;
        if(cnt==pos)  break;
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

   
}