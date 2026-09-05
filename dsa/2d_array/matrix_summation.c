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
            res[i][j] = arr1[i][j] + arr2[i][j];
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



    //user input
    int a,b,c,d, i, j;
    printf("Enter the order of 1st matrix: ");
    scanf("%d %d", &a, &b);
    printf("Enter the order of 2nd matrix: ");
    scanf("%d %d", &c, &d);
    int arr1[a][b], arr2[c][d], res[a][b];
    if (a == c && b == d) {
        printf("Enter the elements of the 1st matrix: \n");
        for (i=0;i<a;i++) {
            for (j=0;j<b;j++) {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter the elements of the 2nd matrix: \n");
        for (i=0;i<a;i++) {
            for (j=0;j<b;j++) {
                scanf("%d", &arr2[i][j]);
            }
        }
        for (i=0;i<a;i++) {
            for (j=0;j<b;j++) {
                res[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        for (i=0;i<a;i++) {
            for (j=0;j<b;j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else 
        printf("Summation cannot be done!");
    return 0;
}
