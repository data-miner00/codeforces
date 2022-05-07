/**
 *    Author            : Shaun Chong 
 *    Created           : May 7, 2022 10:39 AM
 *    Problem Name      : B. Queue at the School
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/266/B
 *    Submission Url    : https://codeforces.com/problemset/submission/266/156151892
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
    int n, t;
    cin >> n >> t;

    cin.clear();
    cin.ignore(INT_MAX,'\n');

    string line;
    getline(cin, line, '\n');

    for (int i = 0; i < t; i++) {
        int changed = false;
        for (int j = 0; j < n - 1; j++) {
            if (changed) {
                changed = false;
                continue;
            }
            if (line[j] == 'B' && line[j+1] == 'G') {
                line[j] = 'G';
                line[j + 1] = 'B';
                changed = true;
            }
        }
    }

    cout << line << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
