/**
 *    Author            : Shaun Chong 
 *    Created           : April 28, 2022 9:38 PM
 *    Problem Name      : A. Wrong Subtraction
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/977/A
 *    Submission Url    : https://codeforces.com/problemset/submission/977/155210010
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 0 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) n /= 10;
        else n--;
    }

    cout << n << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
