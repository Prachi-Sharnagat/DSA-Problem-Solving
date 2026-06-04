/ brute force 
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==NULL || head->next == NULL){
           return head; 
        }
      
        Node * temp = head;
        Node * dummy0 = new Node(-1);
        Node * dum0 = dummy0;
        Node * dummy1 = new Node(-1);
        Node * dum1 = dummy1;
        Node * dummy2 = new Node(-1);
        Node * dum2 = dummy2;

        while(temp!=NULL){
            if(temp->data == 0){
                dummy0->next = temp;
                dummy0 = dummy0->next;
            }
            else if(temp->data == 1){
                 dummy1->next = temp;
                dumm1 = dummy1->next;
            }
            else{
                 dummy2->next = temp;
                dumm2 = dummy2->next;
            }
            temp = temp ->next;
        }
        dummy0->next = (dum1->next) ? dum1->next : dum2->next;
        dummy1->next = dum2->next;
        dummy2->next = NULL;
        return dum0->next;
  
    }
};

// brute force 
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==NULL || head->next == NULL){
           return head; 
        }
        
      int cnt0 = 0, cnt1 = 0, cnt2 = 0;
      Node * temp = head;
      while(temp!=NULL){
          if(temp->data == 0){
              cnt0++;
          }
          else if(temp->data == 1){
              cnt1++;
          }
          else{
              cnt2++;
          }
          temp = temp->next;
      }
      
      temp = head;
      while(temp!=NULL){
          if(cnt0){
              temp->data = 0;
              cnt0--;
          }
          else if(cnt1){
              temp->data = 1;
              cnt1--;
          }
          else{
              temp->data = 2;
          }
          temp = temp->next;
      }
      
      return head;
      
    }
};
















/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> arr;
        Node * temp = head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        sort(arr.begin(),arr.end());
        int i=0;
        while(temp!=NULL){
            temp->data = arr[i];
            temp = temp->next;
            i++;
        }
        
        return head;
    }
};