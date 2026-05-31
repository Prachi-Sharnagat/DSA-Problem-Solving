// optimal approach : 





class Solution {
public:
    bool isPalindrome(ListNode* head) {
     ListNode * temp = head;
     stack<int> st;
     while(temp!=NULL){
        st.push(temp->val);
        temp = temp->next;
     }

     temp = head;
     while(temp!=NULL){
        int x = st.top();
        if(temp->val!=x){
            return false;
        }
        st.pop();
        temp = temp->next;
     }
        

        return true;
    }
};