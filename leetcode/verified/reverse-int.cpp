/**
 *    Author            : Shaun Chong 
 *    Created           : August 12, 2023 2:23 PM
 *    Problem Name      : 7. Reverse Integer
 *    Problem Url       : https://leetcode.com/problems/reverse-integer/
 *    Submission Url    : https://leetcode.com/problems/reverse-integer/submissions/1019008816/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : - ms (Beats 100.00% of users with C++)
 *    Solution Space    : 6.16 MB (Beats 14.05% of users with C++)
**/

class Solution {
public:
    int reverse(int x) {
        bool negative = x < 0;
        int len = to_string(x).size();
        long num = 0;

        if (negative) {
            if (x == std::numeric_limits<int32_t>::min()) {
                return 0;
            }
            
            len -= 1;
            x *= -1;
        }

        int temp = 0;

        for (int i = 0; i < len; i++) {
            num += (x / (long)pow(10, (len - 1 - i))) * (long)pow(10, i);
            x = (x % (long)pow(10, len - 1 - i));
        }

        num = negative ? num * -1 : num;

        if (num > std::numeric_limits<int32_t>::max() || num < std::numeric_limits<int32_t>::min()) {
            return 0;
        }

        return num;
    }
};