// Problem  : min-stack
// Difficulty: Medium
// Topic    : Stack
// Language : cpp
// Runtime  : 58 ms
// Memory   : 150.9 MB
// Date     : 2026-08-03
// LeetCode : https://leetcode.com/problems/min-stack/
class MinStack {
public:

            stack<pair<int, int>> st;   

    MinStack() {
     }
    
    void push(int value) {
        if(st.empty()){
            st.push({value, value});
        }else{
            int top = st.top().second;
            int minVal = min(value, top);
            st.push({value, minVal});
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

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */