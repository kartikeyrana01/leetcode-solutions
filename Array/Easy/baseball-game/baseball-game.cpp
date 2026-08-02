// Problem  : baseball-game
// Difficulty: Easy
// Topic    : Array
// Language : cpp
// Runtime  : 0 ms
// Memory   : 13 MB
// Date     : 2026-08-02
// LeetCode : https://leetcode.com/problems/baseball-game/
class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int> st;
       for(int i = 0 ; i<ops.size(); i++){
        if(ops[i] == "+"){
            int first = st.top();
            st.pop();
            int second = st.top();

            st.push(first);
            st.push(first + second);
        }else if(ops[i] == "D"){
            int top = st.top();
            st.push(2*top);
        }else if(ops[i] == "C"){
            st.pop();
        }else{
            st.push(stoi(ops[i]));        }
       }
       int sum = 0 ;
       while(!st.empty()){
        sum+=st.top();
        st.pop();
       }
       return sum;

    }
};