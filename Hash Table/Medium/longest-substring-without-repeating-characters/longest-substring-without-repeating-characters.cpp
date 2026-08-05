// Problem  : longest-substring-without-repeating-characters
// Difficulty: Medium
// Topic    : Hash Table
// Language : cpp
// Runtime  : 56 ms
// Memory   : 19.4 MB
// Date     : 2026-08-05
// LeetCode : https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int i = 0;
        int maxWS = 0;

        for (int j = 0; j < s.length(); j++) {

            if (mp.find(s[j]) != mp.end() && mp[s[j]] >= i) {
                i = mp[s[j]] + 1;
            }

            mp[s[j]] = j;

            int currWS = j - i + 1;

            maxWS = max(maxWS, currWS);
        }

        return maxWS;
    }
};