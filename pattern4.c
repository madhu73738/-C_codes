// pyramid pattern
/*
   1      1
    2e    0 1
     3    1 0 1
      4e  0 1 0 1
       5  1 0 1 0 1
       
*/
#include <stdio.h>
int main() 
{
int i,j,num,temp,a,b;

num=5;

a=0;
b=1;

for(i=1;i<num+1;i++)
{ 
    if(i%2==a) //even --> 0
    {
      temp= a;
    }
    else // odd --> 1
    {
      temp=b;
    }
   
   for(j=0;j<i;j++)
   {
    printf("%d ",temp);
     if (temp==a)
     temp=b;
     else
     temp=a;
   }
printf("\n");
}

    return 0;
}

