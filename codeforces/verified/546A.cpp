/**
 *    Author            : Shaun Chong 
 *    Created           : April 20, 2022 9:26 PM
 *    Problem Name      : A. Soldier andBananas
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/546/A
 *    Submission Url    : https://codeforces.com/problemset/submission/546/154201332
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

ll sum(ll a, ll l) {
    return (ll)((l / 2.) * (a + l));
}

void solve() {
    ll k, n, w;
    cin >> k >> n >> w;

    ll answer = (k * sum(1, w)) - n;

    cout << (answer >= 0 ? answer : 0) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
