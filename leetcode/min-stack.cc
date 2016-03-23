class MinStack {
    stack<int> elestk;
    stack<int> minstk;
public:
    void push(int x) {
        elestk.push(x);
        if ( minstk.empty() || x <= minstk.top() ) 
            minstk.push(x);
    }

    void pop() {
        if (elestk.empty()) return;
        
        if (minstk.top() == elestk.top())
            minstk.pop();
            
        elestk.pop();
    }

    int top() {
        return elestk.top();
    }

    int getMin() {
        return minstk.top();
    }
};
