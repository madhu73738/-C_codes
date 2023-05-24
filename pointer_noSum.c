#include <stdio.h>
int main()
{
int a,b,*x,*y,sum;
scanf("%d %d",&a,&b);
x=&a;
y=&b;
sum=*y+*x;

printf("%d\n",sum);





return 0;
}