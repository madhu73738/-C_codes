//array to collect temp of 2 cities

#include <stdio.h>
int main()
{
    int l[2][7],i,j;
    for(i=0;i<2;i++)
    { 
        printf("\nenter city %d: ",i);
        for (j=0;j<7;j++)
        scanf("%d",&l[i][j]);
    }

    for(i=0;i<2;i++)
    { 
        printf("\n city %d: ",i);
        for (j=0;j<7;j++)
        printf("%d ",l[i][j]);
    }


    return 0;
}