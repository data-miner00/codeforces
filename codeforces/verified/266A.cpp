/**
 *    Author            : Shaun Chong 
 *    Created           : April 18, 2022 9:54 PM
 *    Problem Name      : A. Stones on the Table
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/266/A
 *    Submission Url    : https://codeforces.com/problemset/submission/266/154000869
 *    Solution Compiler : GNU G++17
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
    int n, counter = 0;
    cin >> n;
    char input[n+1];
    cin >> input;

    for (int i = 0; i < n; ++i) {
        if (input[i] == input[i+1]) {
            counter++;
        }
    }

    cout << counter << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
