// copy string to different variable using function


#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], d[100];
    printf("enter: ");
    gets(s);
    strcpy(d,s);
    printf("new list:%s",d);
}




