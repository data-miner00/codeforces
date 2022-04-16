"""
/**
 *    Author            : Shaun Chong 
 *    Created           : April 16, 2022 12:44 PM
 *    Problem Name      : A. Helpful Math
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/336/A
 *    Submission Url    : https://codeforces.com/problemset/submission/339/153772438
 *    Solution Compiler : PyPy 3.6.9 (7.3.0)
 *    Solution Status   : Accepted
 *    Solution Time     : 312 ms
 *    Solution Space    : 4108 KB
**/
"""

from itertools import accumulate,chain,combinations,groupby,permutations,product
from collections import deque,Counter
from bisect import bisect_left,bisect_right
from math import gcd,sqrt,sin,cos,tan,degrees,radians
from fractions import Fraction
from decimal import Decimal


if __name__ == "__main__":
    _input = input()

    numbers = _input.split("+")
    numbers.sort()
    numbers = "+".join(numbers)
    print(numbers)

