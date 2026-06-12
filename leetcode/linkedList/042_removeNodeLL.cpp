class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
       head = reverse(head);
       int maxi = head->val;
        ListNode * curr = head;
        ListNode * prev = NULL;

        while(curr && curr->next!=NULL){
            if(maxi > curr->next->val){
               curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
                maxi = curr->val;
            }
        }

        return reverse(head);
    }
};