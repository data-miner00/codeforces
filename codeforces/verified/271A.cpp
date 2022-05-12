/**
 *    Author            : Shaun Chong 
 *    Created           : May 12, 2022 8:49 PM
 *    Problem Name      : A. Beautiful Year
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/271/A
 *    Submission Url    : https://codeforces.com/problemset/submission/271/156920685
 *    Solution Compiler : GNU G++17
 *    Solution Status   : Accepted
 *    Solution Time     : 30 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array
#define MAX_DIGITS  4

using namespace std;

void solve() {
    int year;
    cin >> year;

    while (true) {
        char num_char[MAX_DIGITS + sizeof(char)];
        sprintf(num_char, "%d", ++year);
        int n = sizeof(num_char) / sizeof(num_char[0]);
        unordered_set<int> os(num_char, num_char + n);
        if (os.size() == MAX_DIGITS + 1) {
            cout << year << endl;
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
