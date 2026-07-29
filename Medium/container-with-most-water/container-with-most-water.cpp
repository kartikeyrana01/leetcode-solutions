// Problem  : container-with-most-water
// Difficulty: Medium
// Language : cpp
// Runtime  : 0 ms
// Memory   : 63 MB
// Date     : 2026-07-29
// LeetCode : https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
int maxArea = 0;      
  int i = 0 ;
        int j = height.size()-1;
        while(i<j){
           int maxWater = min(height[i],height[j])*(j-i);
            maxArea  = max(maxArea ,maxWater);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return  maxArea;
    }
};