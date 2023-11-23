class MyQueue {
private:

    std::queue<int> q;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
         q.push(x);
    }
    
    int pop() {
        if (!q.empty()) {
            int frontElement = q.front();
            q.pop();
            return frontElement;
        }
        return -1; 
    }
    
    int peek() {
        if (!q.empty()) {
            return q.front();
        }
        return -1;
    }
    
    bool empty() {
         return q.empty();
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