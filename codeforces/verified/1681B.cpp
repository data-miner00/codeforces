/**
 *    Author            : Shaun Chong 
 *    Created           : May 26, 2022 9:49 PM
 *    Problem Name      : B. Card Trick
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1681/B
 *    Submission Url    : https://codeforces.com/problemset/submission/1681/158533506
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Runtime error on test 3
 *    Solution Time     : 61 ms
 *    Solution Space    : 780 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    int n, ptr = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        ptr += temp;
    }

    cout << a[ptr % n] << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
