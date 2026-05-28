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

Node *deleteHead(Node * head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node * temp = head;
    Node * back = head;
    head = head->next;
    head->back = NULL;
    delete temp;

    return head;

}

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


int main(){
    vector<int> arr = {2 , 5 , 7 ,9};
    // Node* head = new Node(arr[0]);
    // Node * prev = head ;
    Node * head = convertArrayToDoubleLL(arr);
    print(head);

    // head = deleteHead(head);
    // print(head);

    head = deleteTail(head);
    print(head);


    return 0;
}