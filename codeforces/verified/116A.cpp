/**
 *    Author            : Shaun Chong 
 *    Created           : May 2, 2022 10:08 AM
 *    Problem Name      : A. Tram
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/116/A
 *    Submission Url    : https://codeforces.com/problemset/submission/116/155544567
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
    int n, capacity = 0, _max = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        capacity -= a;
        capacity += b;
        if (capacity > _max) _max = capacity;
    }
    cout << _max << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
