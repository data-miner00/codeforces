/**
 *    Author            : Shaun Chong 
 *    Created           : May 13, 2022 10:05 PM
 *    Problem Name      : Roman to Integer
 *    Problem Url       : https://leetcode.com/problems/roman-to-integer/
 *    Submission Url    : https://leetcode.com/submissions/detail/698718479/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 3 ms
 *    Solution Space    : 8.3 MB
**/

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        map<char, int> m;
        m['M'] = 1000;
        m['D'] = 500;
        m['C'] = 100;
        m['L'] = 50;
        m['X'] = 10;
        m['V'] = 5;
        m['I'] = 1;
        
        for (int i = 0; i < s.size(); i++) {
            if (i != s.size() - 1 && m[s[i]] < m[s[i + 1]])
                total -= m[s[i]];
            else
                total += m[s[i]];
        }
        
        return total;
    }
};