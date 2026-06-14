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
    int pairSum(ListNode* head) {
        ListNode * temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        int arr[n];
        temp = head;
        int size = 0;
        // convert into array 
        while(temp){
            arr[size++]= temp->val;
            temp = temp->next;
        }
        int mx = INT_MIN;
        for(int i=0; i<n/2; i++){
            mx = max(mx,(arr[i] + arr[n-1-i])); 
        }

        return mx;
    }
};


class Solution {
public:
    int pairSum(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* prev = NULL;
        while(slow){
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Calculate twin sum
        int mx = 0;
        ListNode* first = head;
        ListNode* second = prev;

        while(second){
            mx = max(mx, first->val + second->val);
            first = first->next;
            second = second->next;
        }

        return mx;
    }
};