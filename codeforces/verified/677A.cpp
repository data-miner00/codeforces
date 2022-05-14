/**
 *    Author            : Shaun Chong 
 *    Created           : May 14, 2022 5:34 PM
 *    Problem Name      : A. Vanya and Fence
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/677/A
 *    Submission Url    : https://codeforces.com/problemset/submission/677/157137528
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
    int n, h, total = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > h)
            total += 2;
        else
            total++;
    }
    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
