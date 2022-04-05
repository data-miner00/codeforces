/**
 *    Author            : Shaun Chong 
 *    Created           : April 5, 2022 2:25 PM
 *    Problem Name      : B. Honest Coach
 *    Problem Limit     : 2000 ms , 256 MB
 *    Problem Url       : https://codeforces.com/problemset/problem/1360/B
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

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

void solve() {
    int n, _min = INT_MAX;
    cin >> n;
    int athletes[n];

    for (int i = 0; i < n; ++i) {
        cin >> athletes[i];
    }

    bubbleSort(athletes, n);

    for (int i = n; i > 1; --i) {

        int diff = athletes[i-1] - athletes[i-2];

        if (diff < _min) {
            _min = diff;
        }
    }

    cout << _min << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
