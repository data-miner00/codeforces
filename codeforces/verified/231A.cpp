/**
 *    Author            : Shaun Chong 
 *    Created           : April 8, 2022 1:32 AM
 *    Problem Name      : A. Team
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/231/A
 *    Submission Url    : https://codeforces.com/problemset/submission/231/152950663
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
    int n, sure = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int c = 0;
        for (int j = 0; j < 3; ++j) {
            int temp;
            cin >> temp;
            if (temp == 1) c++;
        }
        if (c >= 2) sure++;
    }
    cout << sure << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
