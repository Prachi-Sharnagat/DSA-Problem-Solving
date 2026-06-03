// tc -> o(n+ n/2)
// sc -> o(1)
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == NULL)
{
    return NULL;
}        
int cnt = 0;
while(temp!=NULL){
    cnt++;
    temp = temp->next;
}
temp = head;
int cntVal = 0;
while(temp!=NULL){
    cntVal++;
    if(cntVal == cnt/2){
        temp->next= temp->next->next;
    }

    temp = temp->next;
}



return head;
    }
};



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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == NULL)
{
    return NULL;
}        

ListNode * slow = head;
ListNode * fast = head;
ListNode * prev = NULL;
while(fast!=NULL && fast->next!=NULL){
      prev = slow;
    slow = slow->next;
    fast = fast->next->next;
}
prev->next = slow->next;

return head;
    }
};