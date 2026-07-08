/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class myStack {
    int sz;
    Node * top;
   
    
  public:
    myStack() {
        // Initialize your data members

        top = NULL;
        sz = 0;
        
    }

    bool isEmpty() {
        // check if the stack is empty
        if(sz == 0){
            return true;
        }
        
        return false;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node * temp = new Node(x);
        temp -> next = top;
        top = temp;
        sz = sz + 1;
    }

    void pop() {
        if(sz==0){
            return;
        }
        Node * temp = top;
        top = temp->next;
        delete temp;
        sz = sz - 1;
        // Removes the top element of the stack
    }

    int peek() {
        if(sz == 0){
            return -1;
        }
        return top->data;
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return sz;
        // Returns the current size of the stack.
    }
};