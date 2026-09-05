#include<stdio.h>

int main() {
    //basic matrix multiplication
    int arr1[2][3], arr2[3][2], res[2][2];
    int sum, rest;
    int i,j,k;
    printf("Enter 1st array elements: ");
    for (i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter 2nd array elements: ");
    for (i=0;i<3;i++) {
        for (j=0;j<2;j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            sum = 0;
            for (k=0;k<3;k++) {
                rest = arr1[i][k] * arr2[k][j];
                sum = sum+ rest;
            }
            res[i][j] = sum;
        }
    }
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
