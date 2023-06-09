// pyramid pattern
/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include <stdio.h>
int main() 
{
int i,j,num,r,temp,t;

num=5;
temp=num;
for(i=1;i<num+1;i++)
{
    for(t=temp+3;t>0;t--)
    {
        printf(" ");
    }
    for(j=1;j<i+1;j++)
    {
        printf("%d ",j);
    }
    for(r=i-1;r>0;r--)
    {
        printf("%d ",r);
    }
printf("\n");
temp-=2;

}

    return 0;
}






