//sum of 2 matrix
#include <stdio.h>
int main()
{
int a,i,j;
printf("Enter dimensions : ");
scanf("%d", &a);
int l1[a][2],l2[a][2],l3[a][2];
printf("Enter the values :");

for(i=0;i<a;i++)
{
    for(j=0;j<3;j++)
    {
        printf("\nlist1: ");
        scanf("%d",&l1[i][j]);
        printf("\nlist2: ");
        scanf("%d",&l2[i][j]);
        l3[i][j]=l1[i][j]+l2[i][j];

    }
}
for(i=0;i<a;i++)
{
    for(j=0;j<3;j++)
    { 
    printf("%d ", l3[i][j]);
    }
}

return 0;
}