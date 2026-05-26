
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

    Node *insertBeforeVal(Node *head, int val, int x) {
        // code here
        if(head== NULL){
            return new Node(val);
        }
        
        if(head->data == x){
            Node *insertStart = new Node(val);
            insertStart->next = head;
            return insertStart;
        }
        
        Node * temp = head;

        while(temp){
            
            if(temp->next->data==x){
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

    head = insertBeforeVal(head,7, 6);
    print(head);
    
 }