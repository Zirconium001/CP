#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    //input array
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    //logic part
    for (i=1;i<=n-1;i++) {
        j=i;
        while (j>0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    //output array
    for (i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
