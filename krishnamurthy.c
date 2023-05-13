// check for krishnamurthy no.
//logic: sum of factorial of digits 
#include <stdio.h>
int main()
{
    int num, a,b,c,temp,i;
    num=145;
    a=1;
    temp=num;
    c=0;
    while(num>0)
    {
        b=num%10;
        for(i=b;i>1;i--)
        {
            a*=i;
        }
        c+=a;
        a=1;
        num=num/10;
    }
    if (temp==c)
    printf("%d is Krishnamurti no.",c);
return 0;
}