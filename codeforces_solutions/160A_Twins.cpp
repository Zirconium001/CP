
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    int mySum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        mySum += arr[i];
        count++;

        if (mySum > sum - mySum) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
