
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        string s;

        cin >> n >> c >> s;

        int ans = 0;

        if (c == 'g') {
            cout << 0 << '\n';
            continue;
        }

        string str = s + s;
        int nextGreen = -1;

        for (int i = 2 * n - 1; i >= 0; i--) {
            if (str[i] == 'g') {
                nextGreen = i;
            }

            if (i < n && str[i] == c) {
                ans = max(ans, nextGreen - i);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
