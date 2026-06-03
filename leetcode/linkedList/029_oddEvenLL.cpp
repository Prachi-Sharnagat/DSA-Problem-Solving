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
    ListNode* oddEvenList(ListNode* head) {
      ListNode * odd = head;
      ListNode * even = head->next;
      ListNode * evenHead = even;
      // tc -> 2* o(n/2) = 2 operation 
      // sc -> 0(1)
      while(even!=NULL && even->next!=NULL){
        odd->next = odd->next->next;
        ebven->next = even->next->next;
        odd = odd->next;
        even = even->next;
      }
      odd->next = evenHead;
      return head;
    }
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        ListNode *temp= head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        // n/2 tc
        // O(n/2 + n/2 + n)
// = O(n)
// sc = o(n)
        while(temp!=NULL && temp->next!=NULL  ){
            arr.push_back(temp->val);
            temp = temp->next->next;
        }  
        if(temp!=NULL){
            arr.push_back(temp->val);
        }
        temp = head->next;
        while(temp!=NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp!=NULL){
            arr.push_back(temp->val);
        }
        int i = 0;
        while(temp!=NULL){
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }

        return head;
    }
};