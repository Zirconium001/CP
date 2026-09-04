#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int i, arr[n];
  for (i=0;i<n;i++) {
    scanf("%d", &arr[i]);
  }
  //deletion
  printf("\nwhich index you wanna delete?\n");
  int loc;
  scanf("%d", &loc);
  for (i=loc;i<n;i++) {
    arr[i]=arr[i+1];
  }
  for (i=0;i<n-1;i++) {
    printf("%d ", arr[i]);
  }

  //deletion pro max
  printf("\nwhich digit you wanna delete?\n");
  int val;
  scanf("%d", &val);
  for (i=0;i<n;i++) {
    if (arr[i] == val) {
      for (int j=i; j<n-1;j++) {
        arr[j] = arr[j+1];
      }
      n--;
      break;
    }
  }
  for (i = 0;i<n-1;i++) {
    printf("%d ", arr[i]);
  } 
    return 0;
}
