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
    ListNode* removeElements(ListNode* head, int ele) {
      if(head==NULL){
        return head;
      }
      while(head!=nullptr && head->val==ele){
        ListNode * temp =head;
        head = head->next;
        delete temp;
      }

      ListNode * temp = head;
      ListNode * prev = NULL;
      while(temp){
        if(temp->val==ele){
            prev->next = temp->next;
            ListNode * remove = temp;
            temp = temp->next;
            delete remove;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
      }

      return head;
      
    }
};