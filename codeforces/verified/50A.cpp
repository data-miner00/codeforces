/**
 *    Author            : Shaun Chong 
 *    Created           : April 9, 2022 1:25 AM
 *    Problem Name      : A. Domino Piling
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/158/A
 *    Submission Url    : https://codeforces.com/contest/50/submission/153073629
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
    int m, n;
    cin >> m >> n;

    int area = m * n;
    if (area % 2 == 0) {
        cout << area / 2 << endl;
    } else {
        cout << (area - 1) / 2 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
