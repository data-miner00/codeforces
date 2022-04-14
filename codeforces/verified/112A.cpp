/**
 *    Author            : Shaun Chong 
 *    Created           : April 14, 2022 8:52 PM
 *    Problem Name      : A. Petya and Strings
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/112/A
 *    Submission Url    : https://codeforces.com/problemset/submission/112/153641134
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
    int ans = 0;
    string line1, line2;
    getline(cin, line1, '\n');
    getline(cin, line2, '\n');
    for (string::size_type i = 0; i < line1.size(); ++i) {
        int tmp = ((int)line1[i] >= 97) ? (int)line1[i] - 32 : (int)line1[i];
        int tmp2 = ((int)line2[i] >= 97) ? (int)line2[i] - 32 : (int)line2[i];
        if (tmp > tmp2) {
            ans = 1;
            break;
        } else if (tmp < tmp2) {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
