//---email check---
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int len,a,d;
    char em[100];
    gets(em);
    len=strlen(em);
    a=strchr(em,'@');
    d=strchr(em,'.');
    printf("%d",a);
    
    return 0;
}