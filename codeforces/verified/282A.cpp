/**
 *    Author            : Shaun Chong 
 *    Created           : April 11, 2022 4:16 AM
 *    Problem Name      : A. Bit++
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/282/A
 *    Submission Url    : https://codeforces.com/problemset/submission/282/153330425
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

    int a = 0, b = 0, n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        // null terminated \0
        char temp[4];
        cin >> temp;

        if (temp[1] == '+'){
            a++;
        }
        else {
            b++;
        }
    }

    cout << a - b << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
