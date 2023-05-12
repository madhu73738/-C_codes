//To create an array and store 50 int type value and display it.
#include <stdio.h>

int main() {

  int values[50];

  printf("Enter 50 integers: ");

  
  for(int i = 0; i < 50; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  
  for(int i = 0; i < 50; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
