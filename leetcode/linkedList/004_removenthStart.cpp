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

head = removeNthFromStart(head,2);
print(head);

 }