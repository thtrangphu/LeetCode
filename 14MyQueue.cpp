class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        if (s.size() == 0) {
            s.push(x);
            return;
        }
        int data = s.top();
        s.pop();
        push(x);
        s.push(data);
    }
    
    int pop() {
        int ans = s.top();
        s.pop();
        return ans;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};
