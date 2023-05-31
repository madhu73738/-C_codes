#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int num1,num2; 
    printf("Enter 2 nos: ");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping: %d %d",num1,num2);
    swap(&num1,&num2);
    printf("\nAfter swapping: %d %d",num1,num2);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}