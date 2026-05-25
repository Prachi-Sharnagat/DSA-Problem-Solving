// remove nth node from the end of list 

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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr  ){
           return NULL;
        }
     
     if(head->next==nullptr){
        delete head;
        return NULL;
     }

 ListNode * temp = head;
     int count = 0;

while(temp!=NULL){
    count++;
    temp = temp-> next;
}

     int position = count-n+1;
if(position==1 ){
 ListNode * temp = head;
    head = head-> next;
   delete temp;
    return head;
}
int cnt = 0;

ListNode* prev = NULL;

temp = head;

while(temp){

    //  pass
    cnt++;
    if(cnt == (count-n+1)){
        prev->next = prev->next->next; 
        delete temp; 
        break;
    }
    prev = temp;
    temp = temp->next;
}
        return head;
    }
};