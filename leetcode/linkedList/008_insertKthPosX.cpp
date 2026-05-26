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

  Node *deleteHead_head(Node *head) {
        // if linkedList is empty 
        if(head==nullptr){
            return head;
        }
        Node * temp = head ;
        
        head = head->next;
        free(temp);
        return head;
        // code here
    }

    void print(Node * head){
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp->data << " ";
            temp = temp-> next;
        }
        cout << endl;
    }

  

 Node *deleteHead_tail(Node *head) {
        // if linkedList is empty 
        if(head==nullptr || head->next == nullptr){
            return NULL;
        }
        // minimum 2 elemment linked list should have 
        // i will  stop at second last element 
        Node * temp = head ;
        
while(temp->next->next!=NULL){
    temp = temp->next;

}      
            free(temp->next);
            temp->next = nullptr;
             return head;
        
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

  Node* removeNthFromStart(Node* head, int n) {
        if(head == nullptr){
           return head;
        }
     
if(n==1){
 Node * temp = head;
    head = head-> next;
    free(temp);
    return head;
}
int cnt = 0;
 Node * temp = head;
Node* prev = NULL;
while(temp){

    //  pass
    cnt++;
    if(cnt == n){
        prev->next = prev->next->next; 
        free(temp);   
        break;
    }
    prev = temp;
    temp = temp->next;
}
        return head;
    }


 int main(){
  
    vector<int> arr = {2, 3 , 5 ,6};
    Node * head = convertArrayToLL(arr);
   //  Node  * y = new Node(arr[0],nullptr);
   //  cout << y; // gives location 

   Node  * y = new Node(arr[0]); // object se data 
    cout << y->data << endl; // gives location 

//    head = deleteHead_head(head);
//     print(head);
    
    // head = deleteHead_tail(head);
    // print(head);
head = removeNthFromEnd(head,2);
print(head);

 }


//  Node x = Node(int data , nullptr); // ye just object hai iska point karega y  
//  Node * y = &x;
//  Node * y = new Node(2, nullptr); // pointer to the memory location

// memory space 
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

 /*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
        if(head  == NULL){
            return new Node(x);
        }
        Node* temp = head;
        while(temp->next!=NULL){
        
           temp =  temp->next;
            
        }
        Node * newnode = new Node(x);
         temp->next = newnode;
      
            
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

 /*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

    Node *insertPos(Node *head, int pos, int val) {
        // code here
        
        if(pos==1){
            Node *insertStart = new Node(val);
            insertStart->next = head;
            return insertStart;
        }
        
        Node * temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            if(cnt==pos-1){
                Node * insertK = new Node(val);
                insertK->next = temp->next;
                temp->next = insertK;
                break;
            }
            temp = temp->next;
        }
       
        return head;
        
        
        
    }


 int main(){
  
    vector<int> arr = {2, 3 , 5 ,6};
    Node * head = convertArrayToLL(arr);

    head = insertPos(head,2);
    print(head);
    
 }