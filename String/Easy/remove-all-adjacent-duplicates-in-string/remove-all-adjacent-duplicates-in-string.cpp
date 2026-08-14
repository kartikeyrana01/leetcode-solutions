// Problem  : remove-all-adjacent-duplicates-in-string
// Difficulty: Easy
// Topic    : String
// Language : cpp
// Runtime  : 4 ms
// Memory   : 14.4 MB
// Date     : 2026-08-14
// LeetCode : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        for(int i = 0 ; i<s.length()  ; i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                char top = st.top();
                if(s[i] == top){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }

            
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};