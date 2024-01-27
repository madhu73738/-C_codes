// To perform sum of two number by using dynamic memory allocation. 

#include <stdio.h>
#include <stdlib.h>
void main()
{
int *x,*y,sum;
x = (int*)malloc(sizeof(int));
y = (int*)malloc(sizeof(int));
scanf("%d %d", x,y);
sum = *x + *y;
printf("%d",sum);
}