#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i;
    cin >> n;

    vector<int> store(n);

    for (i = 0; i < n; i++) {
        cin >> store[i];

        if (i > 0) {
            store[i] += store[i-1];
        }
    }

    cin >> m;

    for (i = 0; i < m; i++) {
        int p;
        cin >> p;

        int pos = lower_bound(store.begin(), store.end(), p) - store.begin();

        cout << pos + 1 << '\n';
    }

    return 0;
}
