/**
 *    Author            : Shaun Chong 
 *    Created           : May 2, 2022 10:36 AM
 *    Problem Name      : A. Polycarp and Coins
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1551/A
 *    Submission Url    : https://codeforces.com/problemset/submission/1551/155547735
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
    int n, additional_twos = 0;
    cin >> n;

    int weight = n / 3;
    int residual = n % 3;

    if (residual > 1) {
        additional_twos = residual / 2;
        int oness = residual % 2;
        residual = oness;
    }

    int ones = weight + residual;
    int twos = weight + additional_twos;

    cout << ones << " " << twos << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
