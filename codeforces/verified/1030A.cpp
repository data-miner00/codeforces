/**
 *    Author            : Shaun Chong 
 *    Created           : June 6, 2022 3:55 PM
 *    Problem Name      : A. In Search of an Easy Problem
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1030/A
 *    Submission Url    : https://codeforces.com/problemset/submission/1030/159608756
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 15 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    int n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 1)
            total++;
    }

    cout << (total == 0 ? "EASY" : "HARD") << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
