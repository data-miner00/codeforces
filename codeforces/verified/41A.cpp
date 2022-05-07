/**
 *    Author            : Shaun Chong 
 *    Created           : May 7, 2022 10:49 AM
 *    Problem Name      : A. Translation
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/41/A
 *    Submission Url    : https://codeforces.com/problemset/submission/41/156152439
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
    string word, translation;
    getline(cin, word, '\n');
    getline(cin, translation, '\n');
    string total = word + translation;
    int size = total.size();
    for (int i = 0; i < size / 2; i++) {
        if (total[i] != total[size-i-1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
