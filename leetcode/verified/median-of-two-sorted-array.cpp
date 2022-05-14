/**
 *    Author            : Shaun Chong 
 *    Created           : May 14, 2022 5:21 PM
 *    Problem Name      : Median of two sorted arrays
 *    Problem Url       : https://leetcode.com/problems/median-of-two-sorted-arrays/
 *    Submission Url    : https://leetcode.com/submissions/detail/699174039/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 52 ms (53.83% faster)
 *    Solution Space    : 89.7 MB (34.10% faster)
**/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        
        
        if (nums1.size() % 2 == 0)
            return ((double)(nums1[nums1.size() / 2]) + nums1[(nums1.size() / 2) - 1]) / 2;
        else
            return (double)nums1[nums1.size() / 2];
    }
};