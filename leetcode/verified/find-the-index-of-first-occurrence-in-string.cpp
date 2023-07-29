/**
 *    Author            : Shaun Chong 
 *    Created           : July 30, 2023 7:40 AM
 *    Problem Name      : Find the Index of the First Occurrence in a String
 *    Problem Url       : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 *    Submission Url    : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1007256807/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : - ms (100.00% faster)
 *    Solution Space    : 6.20 MB (55.01% faster)
**/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int startpos = 0;
        while ((startpos = haystack.find(needle, startpos)) != std::string::npos)
            return startpos;
        return -1;
    }
};
