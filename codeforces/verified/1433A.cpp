/**
 *    Author            : Shaun Chong 
 *    Created           : April 8, 2022 12:59 AM
 *    Problem Name      : A. Boring Apartments
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1433/A
 *    Submission Url    : https://codeforces.com/problemset/submission/1433/152948254
 *    Solution Compiler : GNU G++17 (64)
 *    Solution Status   : Accepted
 *    Solution Time     : 0 ms
 *    Solution Space    : 4 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

int summ(int n, int a, int d) {
    return (int)((n / 2.) * ((2. * a) + (n - 1) * d));
}

void solve() {
    int x, _count = 1;
    cin >> x;

    while (x > 10) {
        x /= 10;
        _count++;
    }

    int total = (x - 1) * 10;
    total += summ(_count, 1, 1);

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
