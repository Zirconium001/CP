
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[200005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    long long diff = a[n - 1] - a[0];
    long long ways = 0;

    if (diff == 0) {
        ways = 1LL * n * (n - 1) / 2;
    } else {
        int mn = 0, mx = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == a[0]) mn++;
            if (a[i] == a[n - 1]) mx++;
        }
        ways = 1LL * mn * mx;
    }
    cout << diff << " " << ways << '\n';
    return 0;
}
