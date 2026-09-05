#include<stdio.h>

int main() {
    int n,m;
    printf("Enter the order of the matrix: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
