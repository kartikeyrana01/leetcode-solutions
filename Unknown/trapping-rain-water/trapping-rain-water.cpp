// Problem  : trapping-rain-water
// Difficulty: Unknown
// Language : cpp
// Runtime  : 0 ms
// Memory   : 27.4 MB
// Date     : 2026-07-29
// LeetCode : https://leetcode.com/problems/trapping-rain-water/
class Solution {
public:
    int trap(vector<int>& nums) {
       int n = nums.size();
       vector<int> maxL(n) ;
       maxL[0] = nums[0];
       for(int i = 1 ; i<n ; i++){
            maxL[i] = max(maxL[i-1], nums[i]);
       }

       vector<int> maxR(n) ;
       maxR[n-1] = nums[n-1];
       for(int i = n-2 ; i>=0 ; i--){
            maxR[i] = max(maxR[i+1], nums[i]);
       }
int totalWater = 0;
       for(int i = 0 ; i<n ; i++){
        int waterTrapped = min(maxL[i],maxR[i]) - nums[i];
         
       if(waterTrapped < 0 ){
            waterTrapped = 0;
        }
           
            totalWater+=waterTrapped;
       }
        
        
       return totalWater;
    }
};