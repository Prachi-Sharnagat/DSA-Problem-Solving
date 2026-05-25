


  #include<bits/stdc++.h>
 using namespace std;
//  instread of struct we can write class
 struct Node {
    public:
    int data;
    Node * next;    
    public:

    // constructor
    Node(int data1, Node * next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
 };

Node * insertHead(Node* head, int ele){
    // Node * temp = new  Node(ele, head);
    // return temp;
    return new Node(ele,head);
}

class Solution {
  public:
    Node *insertAtFront(Node *head, int val) {
        // Code here
        Node* temp = new Node(val);
        temp->next = head;    
    
        return temp;
    }
};
    
    void print(Node * head){
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp->data << " ";
            temp = temp-> next;
        }
        cout << endl;
    }

 Node * convertArrayToLL(vector<int> &arr){
    Node * head = new Node(arr[0]);
    Node *mover = head;
    int n = arr.size();
    for(int i=1; i<n; i++){
      Node* temp = new Node(arr[i]);
      mover -> next = temp;
      mover = temp;
    }
    return head;
 }


    int main(){
  
    vector<int> arr = {2, 3 , 5 ,6};
    Node * head = convertArrayToLL(arr);

head = insertHead(head,12);
print(head);

 }
