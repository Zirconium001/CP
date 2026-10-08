#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }

    //sorting part
    int temp;
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-1-i;j++) {
            if (arr[j]>arr[j+1]) {
                //bubble sort
                temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
