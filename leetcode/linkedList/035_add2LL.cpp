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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        if(head1 == NULL){
            return head2;
        }
        if(head2== NULL){
            return head1;
        }   
            ListNode * headNew1 = head1;
            ListNode * headNew2 = head2;
            // ListNode * headNew2 = head2;
            ListNode * dummy = new ListNode(-1);
            ListNode *  dum = dummy;
            int carry = 0;
            // ListNode * temp1 = headNew1;
            // ListNode * temp2 = headNew2;
        while(headNew1!= NULL && headNew2 !=NULL){
                int sum = headNew1->val + headNew2->val + carry;
                int rem = sum%10;       
                carry = sum/10;
                dummy->next = new ListNode(rem);
                dummy = dummy->next;
                headNew1 = headNew1->next;
                headNew2 = headNew2->next;
        }

        while(headNew1!=NULL){
                int sum = headNew1->val + carry ;
                int rem = sum%10;
                carry = sum/10;
                dummy->next = new ListNode(rem);
                dummy = dummy->next;
                 headNew1 = headNew1->next;
            }

        while(headNew2!=NULL){
              int sum = headNew2->val + carry;
              int rem = sum%10;
              carry = sum/10;
              dummy -> next = new ListNode(rem);
              dummy = dummy->next;
              headNew2 = headNew2->next;

        }
        if(carry){
             dummy->next = new ListNode(carry);
             dummy = dummy->next;
        }
   
       
       return dum->next;
        
    }
};