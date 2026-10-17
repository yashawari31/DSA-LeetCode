class MyQueue {
public:
    stack<int>ans;
    stack<int>op;
    MyQueue() {
        
    }
    
    void push(int x) {
       op.push(x);
    }
    
    int pop() {
       if(ans.empty()){ 
        while(!op.empty())
        {
            ans.push(op.top());
            op.pop();
        }
       }
        int num=ans.top();
        ans.pop();
        return num;
    }
    
    int peek() {
        if(ans.empty()){ 
        while(!op.empty())
        {
            ans.push(op.top());
            op.pop();
        }
       }
        return ans.top();
    }
    
    bool empty() {
        if(op.empty() && ans.empty())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */