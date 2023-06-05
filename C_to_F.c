// celsius to farenheit

#include <stdio.h>
int main()
{
float c,f;
printf("enter temp(C): ");
scanf("%f",&c);
f=(c*9.0/5)+32;
printf("The temp in Farenheit is: %.2f",f);
    return 0;
}