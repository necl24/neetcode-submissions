class MinStack {
private:
std::stack<int> stack;
std::stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
int currentMin = minStack.empty() ? val : std::min(val, minStack.top());
        minStack.push(currentMin);        
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
        
    }
    
    int top() {
        return stack.top();
        
    }
    
    int getMin() {
        return minStack.top();
        
    }
};
