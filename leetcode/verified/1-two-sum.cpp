/**
 *    Author            : Shaun Chong 
 *    Created           : May 3, 2022 9:59 PM
 *    Problem Name      : 1. Two Sum
 *    Problem Url       : https://leetcode.com/problems/two-sum/
 *    Submission Url    : https://leetcode.com/submissions/detail/692330555/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 528 ms
 *    Solution Space    : 10.2 MB
**/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        
        vector<int> v{a, b};
        
        return v;
    }
};