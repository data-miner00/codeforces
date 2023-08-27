/**
 *    Author            : Shaun Chong 
 *    Created           : August 27, 2023 7:30 PM
 *    Problem Name      : 3. Longest Substring Without Repeating Characters
 *    Problem Url       : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *    Submission Url    : https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1033130023/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 860 ms (5.02% faster)
 *    Solution Space    : 264.82 MB (5.13% better)
**/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int stringLength = s.size();
        if (stringLength <= 1) return stringLength;

        int halfLength = stringLength / 2;
        map<char, int> m;

        int currentMax = 0;

        for (int i = 0; i < halfLength; i++) {
            for (int j = i; j < stringLength - i; j++) {
                if (m.count(s[j])) {
                    if (m.size() > currentMax) {
                        currentMax = m.size();
                    }
                    m.clear();

                    break;
                }

                m[s[j]] = 1;
            }
        }

        m.clear();

        for (int i = stringLength - 1; i >= halfLength; i--) {
            for (int j = i; j >= 0; j--) {
                if (m.count(s[j])) {
                    if (m.size() > currentMax) {
                        currentMax = m.size();
                    }
                    m.clear();

                    break;
                }

                m[s[j]] = 1;
            }
        }

        if (m.size() > currentMax) {
            currentMax = m.size();
        }

        return currentMax;
    }
}