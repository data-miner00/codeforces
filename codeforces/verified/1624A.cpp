/**
 *    Author            : Shaun Chong 
 *    Created           : April 11, 2022 4:33 AM
 *    Problem Name      : A. Plus One on the Subset
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1624/A
 *    Submission Url    : https://codeforces.com/problemset/submission/1624/153331341
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 92 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;


void solve() {
    int n, _min, _max, tmp;
    cin >> n;

    cin >> tmp;
    _min = _max = tmp;
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        if (temp > _max) _max = temp;
        else if (temp < _min) _min = temp;
    }

    cout << _max - _min << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
