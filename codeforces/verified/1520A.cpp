/**
 *    Author            : Shaun Chong 
 *    Created           : April 3, 2022 11:19 PM
 *    Problem Name      : A. Do Not Be Distracted!
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1520/A
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 15 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    set<char> tasks;
    char prev;
    int n, change = 0;
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        char temp;
        cin >> temp;
        if (prev != temp) {
            prev = temp;
            tasks.insert(temp);
            ++change;
        }
    }

    cout << (tasks.size() != change ? "NO" : "YES") << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
