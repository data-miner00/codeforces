/**
 *    Author            : Shaun Chong 
 *    Created           : June 6, 2022 3:50 PM
 *    Problem Name      : A. Presents
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/136/A
 *    Submission Url    : https://codeforces.com/problemset/submission/136/159608431
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
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        p[tmp - 1] = i;
    }
    for (int i = 0; i < n; i++) {
        cout << p[i] + 1 << " ";
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
