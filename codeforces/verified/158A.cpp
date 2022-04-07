/**
 *    Author            : Shaun Chong 
 *    Created           : April 8, 2022 2:06 AM
 *    Problem Name      : A. Next Round
 *    Problem Limit     : 3000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/158/A
 *    Submission Url    : https://codeforces.com/problemset/submission/158/152953138
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
    int k, a, y;
    cin >> k >> a;
    int d[k];

    for (int i = 0; i < k; ++i) {
        cin >> d[i];
    }
    int median = d[a - 1];

    for (int i = 0; i < k; ++i) {
        if (d[i] >= median && d[i] > 0) y++;
        else break;
    }
    cout << y << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
