// GNU C++17 (64) - Accepted - 30 ms - 0 KB

#include <bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ar          array

using namespace std;

int n, k, l, c, d, p, nl, np;

void solve() {
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int slices_per_lime = c * d;
    int drink_pct = (k * l / nl);
    int salt_pct = (p / np);

    cout << min(min(slices_per_lime, drink_pct), salt_pct) / n << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--)
        solve();
}
