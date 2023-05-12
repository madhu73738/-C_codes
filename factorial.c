#include <stdio.h>
int main()
{
    int i,num,b;
    num=5;
    b=1;
    for(i=num;i>0;i--)
    {
        b=b*i;
        
    }
    printf("factorial: %d\n",b);
}
