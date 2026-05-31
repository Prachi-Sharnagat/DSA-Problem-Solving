/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/


class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // tortise and haze method 
        Node * fast = head;
        Node * slow = head;
        while(fast!=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                // loop detect 
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                slow = slow->next;
                int cnt = 1;
                while(slow!=fast){
                    slow = slow->next;
                    cnt++;
                }
                return cnt;
            }
        }
        
        
        return 0;
    }
};

/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
            // hashing method : 
        map<Node *, int> mpp;
        Node * temp = head;
        int timer = 1;
        while(temp != NULL){
            if(mpp.find(temp)!=mpp.end()){
              int value = mpp[temp]; // value pe gai thi
              int length = timer - value;
                return length;
            }
            else{
                mpp[temp]= timer;
                mpp.insert({temp,timer});
            }
                timer++;
            temp = temp->next;
        }
        return 0;
    }
};