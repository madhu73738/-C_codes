// To find the factorial of a given no. by using pointer.

#include <stdio.h>

void findfact(int *n, int *fact) 
{
    int i;  
    *fact = 1;
    for (i = 1; i <= *n; i++) 
    {
    *fact *= i ;
    }
}

int main() 
{
    int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    findfact(&n, &fact);
    printf("The factorial of %d is: %d\n", n, fact);
return 0;
}