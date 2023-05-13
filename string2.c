//write a program to compare two string without using library func
//wap to fond reverse of a string by using strrev()
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], d[100];
    printf("enter: ");
    gets(s);
    strrev(s);
    //strcpy(d,s);

    printf("new list: %s ",s);
}




