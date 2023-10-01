//Write a program to read two numbers and compare the numbers using function call by address.
# include <stdio.h>
int comp(int *ptr,int *s);
int main() 
{

    int s, ptr;
    printf("enter no.: ");
    scanf("%d %d",&s,&ptr);
    
    comp(&ptr,&s);
    return 0;
}

int comp(int *ptr, int *s)
{
if(*s>*ptr)
printf("%d is greater than %d", *s,*ptr);
else if(*s<*ptr)
printf("%d is smaller than %d", *s,*ptr);
else
{
    printf("Both are equal\n",*s ,*ptr);
}
return 0;
}