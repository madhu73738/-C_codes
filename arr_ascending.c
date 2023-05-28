// ascending order of the matrix

#include <stdio.h>
int main()
{
    int l[a][b],a=3,b=4,i,j;
    for(i=0;i<2;i++)
    { 
        printf("\nenter city %d: ",i);
        for (j=0;j<7;j++)
        scanf("%d",&l[i][j]);
    }
     for(i=0;i< n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<2;i++)
    { 
        printf("\n city %d: ",i);
        for (j=0;j<7;j++)
        
        printf("%d ",l[i][j]);
    }


    return 0;
}