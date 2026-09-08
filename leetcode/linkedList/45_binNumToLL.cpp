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
    int binToDec(string& s){
        int n = s.length();
        int ans = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                ans+= 0;
            }
            else{
                ans += pow(2, n-i-1);               
            }
        }
        return ans;
    }

    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        if(head->next == NULL){
            return head->val;
        }
        ListNode * temp = head;
        string number = "";
        while(temp!=NULL){
            int value = temp->val;
            number += to_string(value);
            temp = temp -> next;
        }

        return binToDec(number);
    }
};