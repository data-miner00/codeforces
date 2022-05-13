/**
 *    Author            : Shaun Chong 
 *    Created           : May 13, 2022 9:27 PM
 *    Problem Name      : Palindrome Number
 *    Problem Url       : https://leetcode.com/problems/palindrome-number/
 *    Submission Url    : https://leetcode.com/submissions/detail/698678460/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 11 ms
 *    Solution Space    : 5.8 MB
**/

class Solution {
public:
    bool isPalindrome(int x) {
        string tmp = to_string(x);
        int size = tmp.size();
        
        for (int i = 0; i < size / 2; i++) {
            if (tmp[i] != tmp[size - i - 1]) return false;
        }
        
        return true;
    }
};
