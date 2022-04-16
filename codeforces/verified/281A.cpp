/**
 *    Author            : Shaun Chong 
 *    Created           : April 16, 2022 12:26 PM
 *    Problem Name      : A. Word Capitalization
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/281/A
 *    Submission Url    : https://codeforces.com/problemset/submission/281/153771703
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
    string input;
    getline(cin, input, '\n');

    if ((int)input[0] >= 97) input[0] = (char)((int)input[0] - 32);

    cout << input << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
