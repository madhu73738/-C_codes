#include <stdio.h>
int main()
{
int a,i,j,c;
printf("Enter dimensions : ");
scanf("%d", &a);
int l1[a][a];
printf("Enter the values :");
c=0;
for(i=0;i<a+1;i++)
{
    for(j=0;j<i+1;j++)
    {
        printf("\nlist1: ");
        scanf("%d",&l1[i][j]);
       
        if(i==j)
        c+=l1[i][j];


    }
}
printf("%d",c);
return 0;
}

