//wap to exract the 1st character off every word in the string
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char nw=' ';
    int l,i;

    printf("enter: ");
    gets(s);
    nw+=s[0];
    l=strlen(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]== ' ')
        nw+=s[i+1];
    }
    printf("new list: %s ",nw);
    return 0;
}
