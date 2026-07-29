// Problem  : valid-anagram
// Difficulty: Easy
// Language : cpp
// Runtime  : 4 ms
// Memory   : 9.9 MB
// Date     : 2026-07-29
// LeetCode : https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> mp;

        for(int i = 0 ; i<s.length() ; i++){
           mp[s[i]]++;
            
        }

        for(int i = 0 ; i<t.length() ; i++){
            if(mp.find(t[i]) == mp.end()){
                return false;
            }
            mp[t[i]]--;

             if(mp[t[i]]<0){
            return false;
        }
        }

       
        return true;
    }
};