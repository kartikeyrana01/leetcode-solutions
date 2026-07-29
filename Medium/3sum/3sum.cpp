// Problem  : 3sum
// Difficulty: Medium
// Language : cpp
// Runtime  : 35 ms
// Memory   : 29 MB
// Date     : 2026-07-29
// LeetCode : https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums ) {
      sort(nums.begin(), nums.end());

      vector<vector<int>> ans;
    for(int i = 0 ; i<nums.size() ; i++){
        if( i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int left = i+1;
        int right = nums.size() -1;
        while(left<right){
            int sum = nums[i] + nums[right] +nums[left];
            if(sum>0){
                right--;
            }else if(sum<0){
                left++;
            }else{
                ans.push_back({nums[i],nums[left], nums[right]});
                left++;
                right--;

                   // Skip duplicates
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;

            }
        }
    }
    return ans;
    }
};