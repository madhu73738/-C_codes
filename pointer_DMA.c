// To perform sum of two number by using dynamic memory allocation. 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *a, *b, *c;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));

    if (a == NULL || b == NULL || c == NULL) 
    {
        printf("Error! Memory allocation failed.");
        exit(1);
    }
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        c[i] = a[i] + b[i];
    }
    printf("The sum is: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", c[i]);
    }
    free(a);
    free(b);
    free(c);

  return 0;
}