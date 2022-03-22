#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, b, a[100000];

void solve() {
    cin >> n >> b;
    for (int i=0; i<n; ++i) 
        cin >> a[i];
    sort(a, a+n);
    int ans=0;
    for(int i=0; i<n; ++i) {
        if (b>=a[i]) {
            b-=a[i];
            ++ans;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
3
4 100
20 90 40 90
4 50
30 30 10 10
3 300
999 999 999

2
3
0
*/