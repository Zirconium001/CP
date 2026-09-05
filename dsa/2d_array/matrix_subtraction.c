#include <stdio.h>

int main() {
    int arr1[2][2], arr2[2][2], res[2][2];

    printf("Enter array 1 elements: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter array 2 elements: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nCalculating...\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("\nResult:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
