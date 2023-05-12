//calculator using function
#include <stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int rem(int a,int b);
int main()
{
    int a,b,n;
    char s;
    scanf("%s",&s);
    scanf("%d %d",&a,&b);
    
    printf("the answer is: ");
    switch (s)
    {
        case '+':
        n=sum(a,b);
        break;
         case '-':
        n=sub(a,b);
        break;
         case '*':
        n=mul(a,b);
        break;
         case '/':
        n=div(a,b);
        break;
         case '%':
        n=rem(a,b);
        break;
        default:
        break;
    }
    printf("%d",n);
    return 0;
}
int sum(int a,int b)
{   int r=a+b;
    return r;
} 

int mul(int a,int b)
{
    return a*b;
} 

int sub(int a,int b)
{
    return a-b;
} 

int div(int a,int b)
{
    return a/b;
} 

int rem(int a,int b)
{
    return a%b;
} 
