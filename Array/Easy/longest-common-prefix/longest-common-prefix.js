// Problem  : longest-common-prefix
// Difficulty: Easy
// Topic    : Array
// Language : javascript
// Runtime  : 7 ms
// Memory   : 56 MB
// Date     : 2026-07-30
// LeetCode : https://leetcode.com/problems/longest-common-prefix/
/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let x = 0 ;
    while(x < strs[0].length){
        let ch = strs[0][x];
        for(let i = 0 ; i < strs.length ; i++){
            if( ch !== strs[i][x] || strs[i].length == x){
                return strs[0].substring(0 , x);
            }
        }
        x++;
    }
    return strs[0];

};