/**
 *    Author            : Shaun Chong 
 *    Created           : April 3, 2022 9:40 PM
 *    Problem Name      : A. Mishka and Game
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/703/A
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
    int m = 0, c = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        if (p > q) m++;
        else if (p < q) c++;
    }
    cout << (m == c ? ("Friendship is magic!^^") : (m > c ? "Mishka" : "Chris")) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
