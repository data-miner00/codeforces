/**
 *    Author            : Shaun Chong 
 *    Created           : April 4, 2022 11:34 PM
 *    Problem Name      : A - Dislike of Threes
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1560/A
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 15 ms
 *    Solution Space    : 8 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

int o[1000], p = 0;

void solve() {
    int k;
    cin >> k;
    cout << o[k - 1] << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i < 2000; ++i) {
        if (i % 3 == 0 || i % 10 == 3) continue;

        o[p++] = i;

        if (o[999] != 0) break;
    }

    int t;
    cin >> t;
    while(t--)
        solve();
}

