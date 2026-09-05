// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n[10];
    int i, key, loc;
    for (i=0;i<10;i++) {
        scanf("%d", &n[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    //linear search
    for (i=0;i<10;i++) {
        if (n[i] == key) {
            printf("location= %d", i);
            break;
        }
    }
    return 0;
}
