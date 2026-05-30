// tortoise and hare
// slow and fast aalgorithm for optimal approach 
class Solution {
public:
// o(1)->sc and o(n) tc
    bool hasCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }

        }

        return false;
       


    }
};











class Solution {
public:
    bool hasCycle(ListNode *head) {
       map<ListNode* , int> mpp;
        
       while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return true;
        }

        else{
            mpp[temp]=1;
            mpp.insert({temp,1});
        }
        temp = temp->next;

       }

       return false;
    }
};