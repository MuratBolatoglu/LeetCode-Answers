class MinStack {
public:
    MinStack() {}
    void push(int val) {
       s.push(val); 
    }
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int ret=INT_MAX;
        stack<int> temp=s;
        while(!temp.empty()){
            if(temp.top()<ret) ret=temp.top();
            temp.pop();
        }
        return ret;   
    }
    private:
       stack<int> s;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */