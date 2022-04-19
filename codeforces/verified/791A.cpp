/**
 *    Author            : Shaun Chong 
 *    Created           : April 19, 2022 1:23 PM
 *    Problem Name      : A. Bear and Big Brother
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/791/A
 *    Submission Url    : https://codeforces.com/problemset/submission/791/154043804
 *    Solution Compiler : GNU G++17
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
    int a, b, counter = 0;
    cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        counter++;
    }

    cout << counter << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
