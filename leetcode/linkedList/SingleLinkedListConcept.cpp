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

 Node* middleNode(Node* head) {
        // entire node return 
          Node * temp = head;
        int cntVal = 0;
        while(temp){
            cntVal++;
            temp = temp->next;
        }
       int cnt = 0;
       temp = head;
        if(cntVal%2!=0){
            while(temp){
                cnt++;
                if(cnt==round(double(cntVal+1)/2)){
                    break;
                }
                 temp = temp->next;
            }
           
        }
        else{
            while(temp){
                cnt++;
                if(cnt==round(double(cntVal+1)/2)){
                    break;
                }
                 temp = temp->next;
            }

           
        }
        
return temp;
            
        
    }

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

   /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
    bool isPalindrome(Node* head) {
     Node * temp = head;
     stack<int> st;
     while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
     }

     temp = head;
     while(temp!=NULL){
        int x = st.top();
        if(temp->data!=x){
            return false;
        }
        st.pop();
        temp = temp->next;
     }
        

        return true;
    }
 Node* sortList(Node* head) {
        if(head == NULL  || head->next == NULL){
            return head;
        }
        Node * temp = head;
        vector<int> arr;

        while(temp!=NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }        

        sort(arr.begin(),arr.end());
        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->data = arr[i];
            temp = temp->next;
            i++;
        }

        return head;
    }



 int main(){
  
    vector<int> arr = {2, 3 ,4, 1 ,7};
    Node * head = convertArrayToLL(arr);
   //  Node  * y = new Node(arr[0],nullptr);
   //  cout << y; // gives location 

//    Node  * y = new Node(arr[0]); // object se data 
//     cout << y->data << endl; // gives location 

//    head = deleteHead_head(head);
//     print(head);
    
    // head = deleteHead_tail(head);
    // print(head);
// head = removeNthFromEnd(head,2);
// print(head);
// head =middleNode(head);
// print(head);
// bool check = isPalindrome(head);
// if(check){
//     cout << "true";
// }
// else{
//     cout << "false";
// }

head = sortList(head);
print(head);



 }


//  Node x = Node(int data , nullptr); // ye just object hai iska point karega y  
//  Node * y = &x;
//  Node * y = new Node(2, nullptr); // pointer to the memory location

// memory space 
