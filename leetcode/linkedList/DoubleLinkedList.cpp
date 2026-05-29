#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node * next;
    Node * back;

    public:
    Node(int data1 , Node* next1, Node * back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr; 
        back = nullptr;
    }

};
// convert array into doubly linked list
Node* convertArrayToDoubleLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    int n = arr.size();
    Node* prev = head;
    for(int i=1;  i<n; i++){
        Node * temp = new Node(arr[i], nullptr, prev);
        // cout << "temp  : " << temp->data << endl;
        // cout << "prev : " << prev->data << endl;
        prev->next = temp;
        prev = temp;

    }
    return head;

}

// Node *deleteHead(Node * head){
//     if(head == NULL || head->next == NULL){
//         return NULL;
//     }

//     Node * temp = head;
//     Node * back = head;
//     head = head->next;
//     head->back = NULL;
//     delete temp;

//     return head;

// }

// consider  1, 3, 2, 4 

Node *arryatToLL(vector<int> & arr){
    Node * head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node * temp = new Node(arr[i],nullptr, prev);
        
        prev->next = temp;
        prev = temp;
    }
    return head;
}

  void print(Node * head){
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp->data << " ";
            temp = temp-> next;
        }
        cout << endl;
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

// Node * deleteTail(Node * head){
//     Node * temp = head;
//     Node * prev = head;
//     while(temp->next !=NULL){
//         temp = temp->next;
//     }
//     prev = temp->back;
//     prev->next = NULL;
//     temp->next = NULL;
//     temp->back = NULL;
    
//     delete temp;
//     return head;
// }

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
    if(front==NULL) {
        // tail delete 
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


Node *NodeDeleteDLL(Node * head, int node){
    Node * temp = head;;
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

Node * BeforeheadInsertionDLL(Node *head, int value){
    //head , next , backk
    Node * newHead = new Node(value, head, nullptr);
    head->back = newHead;

    return newHead;
}

Node *beforeTailDLL(Node * head, int val){
    Node * temp = head;
    if(head->next== NULL){
        head = BeforeheadInsertionDLL(head, val);
        return head;
    }

    // temp ->next !=NULL   
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node * prev = temp->back;
    Node * insert = new Node(val,temp,prev);
    prev->next = insert;
    temp->back = insert;

    return head;
}

// Node * BeforeheadInsertionDLL(Node * head, int value){
//     if(head==NULL){
//         return new Node(value,nullptr,nullptr);
//     }
//     //head , next , backk
//     Node * newHead = new Node(value, head, nullptr);
//     head->back = newHead;

//     return newHead;
// }

Node * kthPOSInsert(Node* head, int pos, int val){
    if(pos == 1){
        return BeforeheadInsertionDLL(head,val);
    }
    Node * temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(cnt==pos){
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


int main(){
    vector<int> arr = {2 , 5 ,8, 10, 7 ,9};
    // Node* head = new Node(arr[0]);
    // Node * prev = head ;
    Node * head = convertArrayToDoubleLL(arr);
    print(head);

    // head = deleteHead(head);
    // print(head);

    // head = deleteTail(head);
    // print(head);
    // head = NodeDeleteDLL(head,2);
    // print(head);
    // head = BeforeheadInsertionDLL(head, 6);
    // print(head);
    // head = beforeTailDLL(head, 6);
    // print(head);
    // head = kthPOSInsert(head, 8, 23);
    // print(head);
    head = beforeNodeInsert(head,8,7);
    print(head);

    return 0;
}