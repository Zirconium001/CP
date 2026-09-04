#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int i, arr[n];
  for (i=0;i<n;i++) {
    scanf("%d", &arr[i]);
  }
  //insertion
  printf("\nWhere do you wanna insert?\n");
  int loc, val;
  scanf("%d", &loc);

  printf("\nEnter the value: ");
  scanf("%d", &val);
    if (loc<1 || loc > n) {
      printf("Invalid location");
    }
    else {
      
    }
  for (i=n; i>loc-1;i--) {
    arr[i] = arr[i-1];
  }
  arr[loc-1] = val;

  for (i=0;i<=n;i++) {
    printf("%d ", arr[i]);
  } 
    return 0;
}
