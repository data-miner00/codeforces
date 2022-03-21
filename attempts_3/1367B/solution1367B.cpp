// GNU C++17 (64) - Accepted - 0 ms - 0 KB

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

void solve() {
    int n, even = 0, odd = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (i % 2 != x % 2) {
            if (i % 2 == 0) even++;
            else odd++;
        }
    }

    cout << ((even == odd) ? even : -1) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
