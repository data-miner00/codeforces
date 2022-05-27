#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if (b > a)
        swap(a, b);

    cout << max(a, 2 * b) * max(a, 2 * b) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
