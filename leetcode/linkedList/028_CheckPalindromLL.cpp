// optimal approach : 

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
    ListNode  *reverseLL(ListNode * head){
        if(head==NULL  || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverseLL(head->next);
        ListNode  * front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }

        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next!=NULL  &&fast->next->next!=NULL ){
            slow = slow->next;
            fast  = fast->next->next;
        }

    ListNode * newHead = reverseLL(slow->next);
    ListNode * first  = head;
    ListNode * second = newHead;

    while(second!=NULL){
        if(first->val!=second->val){
           return false;
        }
        second = second->next;
        first = first->next;
    }

  
return true;
    
    }
};



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