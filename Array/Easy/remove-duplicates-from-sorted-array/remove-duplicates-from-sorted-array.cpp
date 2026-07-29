// Problem  : remove-duplicates-from-sorted-array
// Difficulty: Easy
// Topic    : Array
// Language : cpp
// Runtime  : 0 ms
// Memory   : 22.6 MB
// Date     : 2026-07-29
// LeetCode : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 0 ;
    for(int i = 0; i<nums.size(); i++){
        if( nums[i] > nums[x]){
            x= x+1;
            nums[x] = nums[i];
        }
    }
    return x+1;
    }
};