/**
 *    Author            : Shaun Chong 
 *    Created           : April 19, 2022 1:36 PM
 *    Problem Name      : A. Black Square
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/431/A
 *    Submission Url    : https://codeforces.com/problemset/submission/431/154044456
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 15 ms
 *    Solution Space    : 260 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;


void solve() {
    int a[4], total = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    cin.clear();
    cin.ignore(INT_MAX,'\n');

    string s;
    getline(cin, s, '\n');

    for (char& c : s) {
       total += a[(int)c - 49];
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
