#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100005], b[100005], c[100005];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        cin >> b[i];

    for (int i = 0; i < n - 2; i++)
        cin >> c[i];

    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);

    int i = 0, j = 0;

    while (i < n && j < n - 1) {
        if (a[i] == b[j]) {
            i++;
            j++;
        } else {
            cout << a[i] << endl;
            break;
        }
    }
    if (i == n - 1 && j == n - 1)
        cout << a[n - 1] << endl;

    i = 0;
    j = 0;

    while (i < n - 1 && j < n - 2) {
        if (b[i] == c[j]) {
            i++;
            j++;
        } else {
            cout << b[i] << endl;
            return 0;
        }
    }
    cout << b[n - 2] << endl;
    return 0;
}
