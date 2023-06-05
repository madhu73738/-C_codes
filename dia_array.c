// To swap the content of the array.

#include <stdio.h>

int main() 
{
    int s,i,t;           //s-> length of array
    
    printf("Enter Range : ");
    scanf("%d", &s);
    int a[s];
    printf("Enter the values :");
    for (i=0; i<s; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("");
   
    printf("After swapping: ");
    for (i=0; i<s; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
return 0;
}