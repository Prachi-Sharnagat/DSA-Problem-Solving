class Solution {
public:    
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==NULL || head2==NULL){
            return NULL;
        }
        ListNode  * temp1 = head1;
        ListNode * temp2 = head2;
        while(temp1!=temp2){
            temp1 = (temp1==NULL) ? head2 : temp1->next;
            temp2 = (temp2==NULL) ? head1 : temp2->next;
        }
    return temp1;
    }
};

class Solution {
public:    
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==NULL || head2==NULL){
            return NULL;
        }
        ListNode  * temp1 = head1;
        ListNode * temp2 = head2;

        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp2 = temp2 ->next;
            temp1 = temp1->next;
        }
        if(temp1){
            temp2 = head1;
            while(temp1!=temp2){
                if(temp1 == NULL){
                    temp1 = head2;
                }
                if(temp2 == NULL){
                    temp2 = head1;
                }
                temp2 = temp2 ->next;
                temp1 = temp1 ->next;
            }
            return temp2;
        }
        else{
            temp1 = head2;
             while(temp1!=temp2){
                  if(temp1 == NULL){
                    temp1 = head2;
                }
                if(temp2 == NULL){
                    temp2 = head1;
                }

                temp2 = temp2 ->next;
                temp1 = temp1 ->next;
            }
            return temp1;
        }
    return NULL;
    }
};


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==NULL || head2==NULL){
            return NULL;
        }
        ListNode  * temp1 = head1;
        ListNode * temp2 = head2;
        int cnt1 = 0, cnt2 = 0;
        while(temp1!=NULL){
            cnt1++;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            cnt2++;
            temp2 = temp2->next;
        }
        temp1 = head1;
        temp2 = head2;

        if(cnt1>cnt2){
            while(cnt1>cnt2){
                cnt1--;
                temp1 = temp1->next;
            }
        }
        else{
            while(cnt2>cnt1){
                cnt2--;
                temp2 = temp2->next;
            }
        }
       
            while(temp1!=NULL && temp2!=NULL){
                if(temp1==temp2){
                    return temp1;
                }
               
             temp1 = temp1 ->next;
            temp2  = temp2 ->next;
          
            }
                 
          

        return NULL;

    }
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==NULL || head2==NULL){
            return NULL;
        }
        // node store in the mpp
        // testcase : listA = 1 ,listB = 1 intersect at 1  
        // return first intersecting point node 
        // not colliding they return nullptr
        map<ListNode * , int> mpp;
        ListNode * temp1 = head1;
        ListNode * temp2 = head2;

        while(temp1!=NULL){
            mpp.insert({temp1,1});
            temp1 = temp1->next;
        }

        while(temp2 != NULL){
            if(mpp.find(temp2)!=mpp.end()){
                return temp2;
            }
            mpp.insert({temp2,1});
            temp2 = temp2->next;
        }


        return NULL;


    }
};