 #include<bits/stdc++.h>
 using namespace std;
//  convert array to linked list : 
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

 // length of linked list : 
 int lengthOfLinkedlist(Node* head){
   int cnt = 0;
    Node * temp = head;
    while(temp!=nullptr){
      // cout << temp->data << " ";
      temp = temp->next;
      cnt++;
    }

    return cnt;

 }

 bool searchIfPresent(Node* head, int value){
   Node * temp = head;
    while(temp!=nullptr){
      // cout << temp->data << " ";
      if(temp->data == value){
         return true;
      }
      temp = temp->next;
      
    }
return false;
    
 }

 Node * convertArrayToLL(vector<int> &arr){
    Node * head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1; i<arr.size(); i++){
      Node* temp = new Node(arr[i]);
      mover -> next = temp;
      mover = temp;
    }
    return head;
 }


 int main(){
  
    vector<int> arr = {2, 3 , 5 ,6};
    Node* head = convertArrayToLL(arr);
    cout << head-> data <<  "  ";
    Node * temp = head;
    while(temp!=nullptr){
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << lengthOfLinkedlist(head) << " " ;

    cout << searchIfPresent(head,7);
 }


