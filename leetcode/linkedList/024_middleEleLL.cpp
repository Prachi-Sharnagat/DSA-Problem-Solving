// optimal one 

// tortoise and hare : 
// tc -> N/2
// SC = 1

Node * middleNode_optimal(Node * head){
    Node * slow  = head;
    Node  * fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


#include<cmath>
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

    Node* middleNode(Node* head) {
        // entire node return 
        // even middle is between node 3 and 4 when 6 
        Node * temp = head;
        int cntVal = 0;
        while(temp){
            cntVal++;
            temp = temp->next;
        }
       int cnt = 0;
       temp = head;
        if(cntVal%2!=0){
            while(temp){
                cnt++;
                if(cnt==round(double(cntVal+1)/2)){
                    break;
                }
                 temp = temp->next;
            }
           
        }
        else{
            while(temp){
                cnt++;
                if(cnt==round(double(cntVal+1)/2)){
                    break;
                }
                 temp = temp->next;
            }

           
        }
        
return temp;
        
    }


    // way 2 : 
    #include<cmath>
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
    ListNode* middleNode(ListNode* head) {
        // entire node return 
        // even middle is between node 3 and 4 when 6 
        ListNode * temp = head;
        int cntVal = 0;
        while(temp){
            cntVal++;
            temp = temp->next;
        }
       int middleNode = (cntVal/2) + 1;
       temp = head;
        if(cntVal%2!=0){
            while(temp){
                middleNode --;
                if(middleNode==0){
                    break;
                }
                 temp = temp->next;
            }
        }
        else{
            while(temp){
                middleNode--;
                if(middleNode==0){
                    break;
                }
                 temp = temp->next;
            }
           
        }
        
return temp;
        
    }
};