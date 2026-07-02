class myStack {
  public:
    int *s;
    int size ;
    int currSize;
    int top;
    myStack(int n) {
        // Define Data Structures
         size = n;
            s = new int [n];
            currSize = 0;
            top = -1;
        
    }

    bool isEmpty() {
        // check if the stack is empty
        if(currSize == 0){
            return true;
        }
        return false;
    }

    bool isFull() {
        // check if the stack is full
        if(currSize >= size){
            return true;
        }
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(currSize>=size){
            return;            
        }
        else {
            top = top + 1;
            s[top] = x;
            currSize += 1;
        }
        
        
    }

    void pop() {
        // removes an element from the top of the stack
        if(currSize == 0){
            return;
            
        }
        else {
            top = top -1;
            currSize -=1;
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(top==-1){
            return -1;
        }
        return s[top];
    }
};