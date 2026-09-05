// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //ARRAY MUST BE SORTED!!
    int n, key, low=0, mid1, mid2;
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
        mid1 = low + (high-low)/3;
        mid2 = high - (high-low)/3;
        if (arr[mid1] == key) {
            printf("Location: %d\n", mid1);
            loc = 1;
            break;
        } else if (arr[mid2] == key) {
            printf("Location: %d\n", mid2);
            loc = 1;
            break;
        } 
        else if (key < arr[mid1]) {
            high = mid1 - 1;
        } else if (key > arr[mid2]) { 
            low = mid2 +1;
        }
        else {
            high = mid1 + 1;
            low = mid2 -1;
        }
    }
    if (loc != 1) {
        printf("Invalid key");
    }
    return 0;
}
