/**
 *    Author            : Shaun Chong 
 *    Created           : April 17, 2022 4:45 AM
 *    Problem Name      : A. Boy or Girl
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/236/A
 *    Submission Url    : https://codeforces.com/problemset/submission/236/153866031
 *    Solution Compiler : GNU G++17
 *    Solution Status   : Accepted
 *    Solution Time     : 30 ms
 *    Solution Space    : 148 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;


void solve() {
    string input;
    set<char> distinct;
    getline(cin, input, '\n');

    for (int i = 0; i < input.size(); ++i) {
        distinct.insert(input[i]);
    }

    cout << (distinct.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
