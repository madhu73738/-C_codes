// To sort an array in ascending order by using function.

#include<stdio.h>
int asc(int a[50], int n)
{
    int i, j, temp;
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
return temp;
}

int main()
{
int a[50], i, n;
printf("Enter Range:\n");
scanf("%d", &n);
printf("Enter The Values :",i);
for(i=0;i< n;i++)
{
    scanf("%d", &a[i]);
}
asc(a,n);
printf("Array in ascending order is:\n");
for(i=0;i< n;i++)
{
    printf("%d ", a[i]);
}
return 0;
}