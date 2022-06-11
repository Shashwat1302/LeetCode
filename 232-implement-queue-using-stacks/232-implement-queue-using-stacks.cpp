class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        return;
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(s1.size()>1){
            int x=s1.top();
            s2.push(x);
            s1.pop();
        }
        int ans=s1.top();
        s1.pop();
        while(s2.size()>0){
            int x=s2.top();
            s1.push(x);
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        while(s1.size()>1){
            int x=s1.top();
            s2.push(x);
            s1.pop();
        }
        int ans=s1.top();
        while(s2.size()>0){
            int x=s2.top();
            s1.push(x);
            s2.pop();
        }
        return ans;
    }
    
    bool empty() {
        if(s1.empty())
            return true;
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