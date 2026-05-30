// tortoise and hare
// slow and fast aalgorithm for optimal approach 

class Solution {
public:
// o(N)->sc and o(n) tc
    ListNode *detectLoop(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
               slow = head ;
        while(slow!=fast){
            fast = fast->next;
            slow = slow->next;
        }  return slow;
            }
        }
        return NULL;
    }
};



class Solution {
public:
// o(N)->sc and o(n) tc
    ListNode *detectLoop(ListNode *head) {
        map<ListNode * , int> mpp;
        ListNode * temp = head;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }
            else{
                mpp.insert({temp,1});
            }
            temp = temp->next;
        }
       

        return NULL;
    }
};
