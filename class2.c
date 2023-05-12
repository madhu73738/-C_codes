// To find the sum of all no. that are stored in array.

#include <stdio.h>
int main() 
{
    int no[50], i, n, sum = 0;
    printf("Enter Range: ");
    scanf("%d", &n);
    for(i=0; i < n; ++i) 
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &no[i]);
        sum += no[i];
    }
    printf("Sum = %d", sum);

return 0;
}