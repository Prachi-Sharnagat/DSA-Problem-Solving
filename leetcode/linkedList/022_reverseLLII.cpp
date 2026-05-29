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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      // right pos and left pos 
    ListNode * temp = head;
    int cnt = 1;
    stack<int> st;
    while(temp!=NULL){
        if(cnt>=left && cnt<=right){
            st.push(temp->val);
        }
        cnt++;
        temp = temp->next;
    }
    temp = head;
    cnt = 1;
    while(temp!=NULL){
          if(cnt>=left && cnt<=right){
            int x = st.top();
            st.pop();
            swap(temp->val, x);
        }
        cnt++;
        temp = temp->next;

    }
    return head;

    }
};