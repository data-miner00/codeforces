/**
 *    Author            : Shaun Chong 
 *    Created           : May 26, 2022 5:12 PM
 *    Problem Name      : A. George and Accomodation
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/467/A
 *    Submission Url    : https://codeforces.com/problemset/submission/467/158509496
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
    int n, c = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) c++;
    }
    cout << c << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
