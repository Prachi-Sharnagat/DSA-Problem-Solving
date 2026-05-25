/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        // if linkedList is empty 
        if(head==nullptr){
            return head;
        }
        Node * temp = head ;
        
        head = head->next;
        free(temp);
        return head;
        // code here
        
    }
};
