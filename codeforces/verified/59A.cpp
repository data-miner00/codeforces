/**
 *    Author            : Shaun Chong 
 *    Created           : April 26, 2022 8:56 PM
 *    Problem Name      : A. Word
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/59/A
 *    Submission Url    : https://codeforces.com/problemset/submission/59/155035536
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
    int upper = 0;
    string s;
    getline(cin, s, '\n');

    for(char& c : s) {
        if (isupper(c)) upper++;
    }

    if (s.size() - upper >= upper) {
        for(char& c : s) {
            c = tolower(c);
        }
    } else {
        for(char& c : s) {
            c = toupper(c);
        }
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
