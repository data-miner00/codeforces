/**
 *    Author            : Shaun Chong 
 *    Created           : May 11, 2022 7:25 PM
 *    Problem Name      : A. Anton and Danik
 *    Problem Limit     : 1000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/734/A
 *    Submission Url    : https://codeforces.com/problemset/submission/734/156823670
 *    Solution Compiler : GNU G++17
 *    Solution Status   : Accepted
 *    Solution Time     : 15 ms
 *    Solution Space    : 100 KB
**/

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array
    
using namespace std;
    
void solve() {
    int n, anton = 0, danik = 0;
    cin >> n;
    char input[n];
    cin >> input;
    
    for (int i = 0; i < n; i++) {
        if (input[i] == 'A') anton++;
        else danik++;
    }
    
    cout << (anton > danik ? "Anton" : (danik > anton ? "Danik" : "Friendship")) << endl;
}
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    t = 1;
    while(t--)
        solve();
}