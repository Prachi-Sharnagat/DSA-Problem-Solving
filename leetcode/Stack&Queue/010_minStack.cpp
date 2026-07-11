// o(2*n) -> space complexity :: stack<Pair<int,int>> st;
// o(1) -> tc

// brute force method 
class MinStack {
public:
    stack<pair<int, int>> st;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push({value, value});
        }
        else{
            st.push({value, min(value, st.top().second)});
        }
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
        
    }
};

// o(n) -> sc
// o(1) -> tc
// optimal solution 
