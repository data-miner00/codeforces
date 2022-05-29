/**
 *    Author            : Shaun Chong 
 *    Created           : May 29, 2022 10:22 AM
 *    Problem Name      : A. Food for Animals
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1675/A
 *    Submission Url    : https://codeforces.com/problemset/submission/1675/158764523
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
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int dogleft = a - x;
    int catleft = b - y;

    if (dogleft < 0) c += dogleft;
    if (catleft < 0) c += catleft;

    cout << (c < 0 ? "NO": "YES") << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
