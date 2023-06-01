///wap to take an array(int) of size 20 as input now add indexes of the array where prime no.
// is present using function
#include<stdio.h>
int main()
{   int s=5;
    int a[s],i,b=0,fact=0,j,temp=0;
    for (i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {   fact=0;
        b=a[i]; 
        if (b>1) //prime no. criteria
        {
            for(j=2;j<b;j++)
        {
            if(b%j==0){
             fact++;
             break;}
        }
        if (fact==0)
            temp+=i;
        }
    }
    printf("sum of index is: %d",temp);
    return 0;
}