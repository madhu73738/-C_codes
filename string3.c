//wap to fond reverse of a string by using strrev()
#include <stdio.h>
#include <string.h>
char rev(char s[0]);
int main()
{
    char s[100], d[100];
    printf("enter: ");
    gets(s);
    strrev(s);
    
    printf("new list: %s ",rev(char s[0]));
    return 0;
}


char rev(char s[0])
{

int i,j,l;
char nw;
l=strlen(s);
for(i=l;i>-1;i--)
{
  nw+=s[i];

}
return nw;
}
//wap to exract the 1st character off every word in the string