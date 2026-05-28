/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
if(head==NULL){
    return NULL;
}

if(head->next == NULL && x==1){
    delete head;
    return NULL;
}

        if(x == 1){
            Node * temp = head;
            head = head->next;
            head -> prev = NULL;
            delete temp;
            return head;
        }
        Node * temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        if(cnt==x){
            Node * temp = head;
            Node * back = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            Node * tail = temp;
            back = temp->prev;
            back->next = NULL;
            tail->next = NULL;
            tail->prev = NULL;
            delete tail;
            return head;
        }
        cnt = 0;
        // Node * temp = head;
        temp = head;
        Node * back = head;
        while(temp){
            cnt++;
            if(x==cnt){
            
                break;
            }
            temp = temp ->next;
        }
        Node * curr = temp;
        back = temp->prev;
        back->next = temp->next;
        temp->next->prev = back;
        temp->next = NULL;
        temp->prev = NULL;
        delete curr;
    
        return head;
    }
};