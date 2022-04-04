/**
 *    Author            : Shaun Chong 
 *    Created           : April 4, 2022 11:50 PM
 *    Problem Name      : A. Watermelon
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/4/A
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
    int num;
    cin >> num;
    cout << ((num != 2 && num % 2 != 1) ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
