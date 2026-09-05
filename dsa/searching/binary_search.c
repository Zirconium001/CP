#include <stdio.h>

int main() {
    int n, key, low=0, mid;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n], loc;
    int high = n-1;
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d", &key);
    while (low<=high) {
        mid = (low+high)/2;
        if (arr[mid] == key) {
            printf("Location: %d\n", mid);
            loc = 1;
            break;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else if (key > arr[mid]) { 
            low = mid +1;
        }
    }
    if (loc != 1) {
        printf("Invalid key");
    }
    return 0;
}
