// To find the fibonacci sequence of first n number using functions.

#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter The No.: \n");
    scanf("%d",&n);
    
    fib(n);
return 0;
}


int fib(int n)
{   int i,a,b,c;
    a=0;
    b=1;
    printf("The Fibonacci Series is:\n");
    
    printf("%d\n",a);
    printf("%d\n",b);
    for (i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf ("%d\n",c);}
        return 0;
}