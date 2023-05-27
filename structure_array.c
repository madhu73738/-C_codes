#include <stdio.h>
//--declared globally--
struct book
{
    char bname[100];
    char aname[100];
    char pname[100];
    int pages;
    float price;
};
int main()
{
    struct book b[20];
    int i;
    //-------taking input for the structure---------
    
    for(i=0;i<2;i++)
    {
        printf("enter the values for book:\n");
        scanf("%s %s %s %d %f",&b[i].bname,&b[i].aname,&b[i].pname,&b[i].pages,&b[i].price);
    }
    i=0;


    //---------printing values------------
    for(i=0;i<2;i++)
    {
    printf("\ndetails of book: \nname: %s\nauthor: %s\npublisher: %s\npages: %d\nprice: %f",b[i].bname,b[i].aname,b[i].pname,b[i].pages,b[i].price);
    }
    return 0;
}