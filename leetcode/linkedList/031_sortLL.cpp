class Solution {
public:

    // Find node before middle
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        return prev;
    }

    // Merge two sorted linked lists
    ListNode* mergeTwoList(ListNode* leftHead, ListNode* rightHead) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while (leftHead != NULL && rightHead != NULL) {

            if (leftHead->val <= rightHead->val) {
                temp->next = leftHead;
                leftHead = leftHead->next;
            }
            else {
                temp->next = rightHead;
                rightHead = rightHead->next;
            }

            temp = temp->next;
        }

        if (leftHead != NULL) {
            temp->next = leftHead;
        }

        if (rightHead != NULL) {
            temp->next = rightHead;
        }

        return dummyNode->next;
    }

    // Merge Sort
    ListNode* mergeSort(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* middle = findMiddle(head);

        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;

        middle->next = NULL;

        leftHead = mergeSort(leftHead);
        rightHead = mergeSort(rightHead);

        return mergeTwoList(leftHead, rightHead);
    }

    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL  || head->next == NULL){
            return head;
        }
        ListNode * temp = head;
        vector<int> arr;
// o(n)
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }        
// o(nlogn)
        sort(arr.begin(),arr.end());
        temp = head;
        int i = 0;
// o(n)
        while(temp!=NULL){
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }
// tc = o(n+ nlogn + n)
// sc -> o(n)
        return head;
    }
};