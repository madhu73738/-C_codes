//WAP  to exract substring of a given string manually
#include <stdio.h>
#include <string.h>
int main()
{
    char a,s[100];
    int st,wr,i;
    printf("enter string: ");
    gets(s);
    printf("\nenter st and no. of chr: ");
    scanf("%d %d",&st,&wr);
    for(i=st;i<st+wr;i++)
    {
        //char a+=s[i];
        printf("%c",s[i]);
    }

    // printf("the string is: %s",a);
    return 0;
}
