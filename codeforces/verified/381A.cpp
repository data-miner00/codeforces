/**
 *    Author            : Shaun Chong 
 *    Created           : April 12, 2022 6:40 PM
 *    Problem Name      : A. Sereja and Dima
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/381/A
 *    Submission Url    : https://codeforces.com/problemset/submission/381/153448940
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
    int n, sereja = 0, dima = 0, _front = 0, rear;
    cin >> n;
    int cards[n];
    rear = n - 1;
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (cards[_front] > cards[rear]) {
                sereja += cards[_front++];
            } else {
                sereja += cards[rear--];
            }
        } else {
            if (cards[_front] > cards[rear]) {
                dima += cards[_front++];
            } else {
                dima += cards[rear--];
            }
        }
    }
    cout << sereja << " " << dima << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
