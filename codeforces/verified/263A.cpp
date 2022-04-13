/**
 *    Author            : Shaun Chong 
 *    Created           : April 13, 2022 11:13 PM
 *    Problem Name      : A. Beautiful Matrix
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/263/A
 *    Submission Url    : https://codeforces.com/problemset/submission/263/153573053
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 30 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    int answer;
    for (int i = -2; i < 3; ++i) {
        for (int j = -2; j < 3; ++j) {
            int temp;
            cin >> temp;
            if (temp == 1) {
                answer = abs(i) + abs(j);
            }
        }
    }
    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
