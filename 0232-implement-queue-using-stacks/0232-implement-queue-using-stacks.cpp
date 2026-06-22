class MyQueue {
public:
    stack<int> s;
    MyQueue() {}
    void push(int x) {s.push(x);}
    int pop() {
        stack<int> temp;
        while(!s.empty()){
            temp.push(s.top());
            s.pop();
        }
        int ans=temp.top();
        temp.pop();
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
        return ans;
    }
    
    int peek() {
        stack<int> temp;
        while(!s.empty()){
            temp.push(s.top());
            s.pop();
        }
        int ans=temp.top();
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
        return ans;
    }
    bool empty() { return s.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */