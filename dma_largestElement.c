#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, *arr, largest;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  arr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  printf("The largest element is: %d\n", largest);

  free(arr);

  return 0;
}