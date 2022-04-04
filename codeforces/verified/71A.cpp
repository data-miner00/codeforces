/**
 *    Author            : Shaun Chong 
 *    Created           : April 5, 2022 12:17 AM
 *    Problem Name      : A. Way Too Long Words
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/71/A
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 15 ms
 *    Solution Space    : 12 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    string word;
    getline(cin, word);

    if (word.size() > 10) {
        cout << word[0] << (word.size() - 2) << word[word.size() - 1] << endl;
    } else {
        cout << word << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.clear();
    cin.ignore(INT_MAX,'\n');
    while(t--)
        solve();
}
