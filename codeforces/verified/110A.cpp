/**
 *    Author            : Shaun Chong 
 *    Created           : May 3, 2022 6:46 PM
 *    Problem Name      : A. Nearly Lucky Number
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/110/A
 *    Submission Url    : https://codeforces.com/problemset/submission/110/155750587
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
    string number, answer = "YES";
    getline(cin, number, '\n');
    int lucky = 0;

    for (int i = 0; i < number.size(); ++i) {
        if (number[i] == '7' || number[i] == '4') {
            lucky++;
        }
    }

    string str_lucky = to_string(lucky);

    for (int i = 0; i < str_lucky.size(); ++i) {
        if (str_lucky[i] == '4' || str_lucky[i] == '7') continue;
        answer = "NO";
    }

    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
