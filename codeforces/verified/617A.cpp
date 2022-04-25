/**
 *    Author            : Shaun Chong 
 *    Created           : April 25, 2022 7:29 PM
 *    Problem Name      : A. Elephant
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/617/A
 *    Submission Url    : https://codeforces.com/problemset/submission/617/154931850
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
    int x, step = 0;
    cin >> x;

    for (int i = 5; i > 0; i--) {
        step = step + (x / i);
        x %= i;
    }

    cout << step << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
