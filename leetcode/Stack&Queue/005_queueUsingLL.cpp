class Node {
  public:
    int data;
    Node * next;  
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    int sz;
    Node * start;
    Node * end;

  public:
    myQueue() {
        sz = 0;
        start = NULL;
        end = NULL;
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the queue is empty
        if(sz==0){
            return true;
        }
        return false;
        
    }

    void enqueue(int x) {
          Node * temp = new Node(x);
        if(start==NULL){
            start = temp;
            end = temp;
        }
        // Adds an element x at the rear of the queue
        // push operation 
      
        else{
            end -> next = temp;
        end = temp; 
        }
       
        sz = sz + 1;
    }

    void dequeue() {
        
        if(start == NULL){
            return;
        }
        Node * temp = start;
        start = start->next;
        delete temp;
        sz = sz - 1 ;
        if(start==NULL){
            end = NULL;
        }
        // Removes the front element of the queue
    }

    int getFront() {
        if(start == NULL){
            return -1;
        }
        return start->data;
        // Returns the front element of the queue
        // If queue is empty, return -1
    }

    int size() {
        return sz;
        // Returns the current size of the queue.
    }
};
