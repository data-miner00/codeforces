/**
 *    Author            : Shaun Chong 
 *    Created           : April 6, 2022 9:45 PM
 *    Problem Name      : B. Gifts Fixing
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1399/B
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
    int n;
    ll mina = INT_MAX, minb = INT_MAX, cum = 0;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < mina) mina = a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] < minb) minb = b[i];
    }

    for (int i = 0; i < n; i++) {
        ll c = a[i] - mina;
        ll d = b[i] - minb;
        cum += max(c, d);
    }
    cout << cum << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
