class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        head = curr->next;   // new head after first swap

        while(curr != NULL && curr->next != NULL)
        {
            ListNode* next = curr->next;

            curr->next = next->next;
            next->next = curr;

            if(prev != NULL)
                prev->next = next;

            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};