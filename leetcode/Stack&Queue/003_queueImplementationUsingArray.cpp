class myQueue {
    int *q;
    int currSize;
    int start;
    int end;
    int size;
  public:
    myQueue(int n) {
        // Define Data Structures
        q = new int[n];
        size = n;
        currSize = 0;
        start = -1;
        end = -1;
    }

    bool isEmpty() {
        if(currSize==0){
            return true;
        }
        return false;
        // check if the queue is empty
    }

    bool isFull() {
        // check if the queue is full
        if(currSize >= size){
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(currSize >= size){
            return;
        }
        if(currSize == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end + 1)% size;
        }
        q[end] = x;
        currSize ++;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(currSize == 0){
            // empty hai 
            return;
        }
        if(currSize == 1){
            start = -1;
            end = -1;
        }
        else{
              start = (start + 1)%size;
        }
      
        currSize --;
        
    }

    int getFront() {
        // Returns the front element of the queue.
        if(start==-1){
            return -1;
        }
        
        return q[start];
    
    }

    int getRear() {
        if(end == -1){
            return -1;
        }
        return q[end];
    }
};