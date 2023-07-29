/**
 *    Author            : Shaun Chong 
 *    Created           : July 29, 2023 4:44 PM
 *    Problem Name      : 20. Valid Parentheses
 *    Problem Url       : https://leetcode.com/problems/valid-parentheses
 *    Submission Url    : https://leetcode.com/problems/valid-parentheses/submissions/1006750555/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 3 ms (Beats 40.67% of users with C++)
 *    Solution Space    : 6.53 MB (Beats 8.57% of users with C++)
**/

class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        stack<int> parens;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                parens.push(s[i]);
            } else if (parens.size() > 0 && (
                s[i] == '}' && parens.top() == '{' ||
                s[i] == ']' && parens.top() == '[' ||
                s[i] == ')' && parens.top() == '(')) {
                parens.pop();
            } else {
                return false;
            }
        }

        return parens.size() == 0;
    }
}

/**
 *    Author            : Shaun Chong 
 *    Created           : July 29, 2023 4:50 PM
 *    Problem Name      : 20. Valid Parentheses
 *    Problem Url       : https://leetcode.com/problems/valid-parentheses
 *    Submission Url    : https://leetcode.com/problems/valid-parentheses/submissions/1006754724/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : - ms (Beats 100.00% of users with C++)
 *    Solution Space    : 6.22 MB (Beats 76.46% of users with C++)
**/

class CorrectedSolution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        stack<char> parens; // fixed typo from `int` to `char`, beats 100.00% of users wtf

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                parens.push(s[i]);
            } else if (parens.size() > 0 && (
                s[i] == '}' && parens.top() == '{' ||
                s[i] == ']' && parens.top() == '[' ||
                s[i] == ')' && parens.top() == '(')) {
                parens.pop();
            } else {
                return false;
            }
        }

        return parens.size() == 0;
    }
}

// ============================================================
class ImprovedSyntaxSolution {
public:
    bool isValid(string s) {
        stack<char> parens;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                parens.push(c);
            } else if (!parens.empty() && (
                c == '}' && parens.top() == '{' ||
                c == ']' && parens.top() == '[' ||
                c == ')' && parens.top() == '(')) {
                parens.pop();
            } else {
                return false;
            }
        }

        return parens.empty();
    }
}