// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int,int>> ans;
        if(head==NULL || head->next==NULL){
            return ans;
        }
        
        Node * tail = head;
        while(tail != NULL && tail->next!=NULL){
           tail = tail->next;
        }
        
       Node  * left = head;
          Node * right = tail;
       while(left!= right && right->next!=left){
           if(left->data + right->data > target){
               right = right->prev;
           }
           else if(left->data + right->data < target){
               left = left->next;
           }
           else{
                 ans.push_back({left->data , right->data});
                 left = left->next;
                 right = right->prev;
           }
           
       }

        return ans;
            
        
    }
};

// o(2n) -> optimal tc

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum_bruteForce(Node *head, int target) {
        vector<pair<int,int>> ans;
        if(head==NULL || head->next==NULL){
            return ans;
        }
        Node * temp1 = head;
        while(temp1!=NULL){
            Node * temp2 = temp1->next;
            // o(n2) tc and sc -> o(1)
            while(temp2!=NULL ){
                if((temp1->data + temp2->data)==target){
                    ans.push_back({temp1->data , temp2->data});
                }
                if((temp1->data + temp2->data)>target){
                    break;
                }
                
                temp2 = temp2->next;
            }   
            temp1 = temp1->next;
        }
        
        return ans;
            
        
    }
};