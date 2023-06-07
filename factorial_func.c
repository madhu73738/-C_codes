//factorial of given function using function

#include <stdio.h>
int fact(int s);
int main()
{
int s,d;
printf("enter no.: ");
scanf("%d",&s);
d=fact(s);
printf("factorial of %d is: %d",s,d);
return 0;
}
int fact(int s)
{
    int i,j=1;
    for(i=s;i>0;i--)
    {
        j*=i;
    }
    return j;
}

