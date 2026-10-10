#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, small;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (i=0;i<n-1;i++) {
        small=i;
        for (j=i+1;j<=n;j++) {
            if (arr[small] > arr[j]) {
                small = j;
            }
        }
        swap(arr[small], arr[i]);
    }

    for (i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
