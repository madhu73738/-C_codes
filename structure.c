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
    struct book b1,b2;
    //-------taking input for the stucture---------
    printf("enter the values for book 1");
    scanf("%s %s %s %d %f",&b1.bname,&b1.aname,&b1.pname,&b1.pages,&b1.price);
    printf("enter the values for book 2");
    scanf("%s %s %s %d %f",&b2.bname,&b2.aname,&b2.pname,&b2.pages,&b2.price);
    //---------printing values------------
    printf("For book 1\nname: %s\nauthor: %s\npublisher: %s\npages: %d\nprice: %f",b1.bname,b1.aname,b1.pname,b1.pages,b1.price);
    printf("For book 2\nname: %s\nauthor: %s\npublisher: %s\npages: %d\nprice: %f",b2.bname,b2.aname,b2.pname,b2.pages,b2.price);
return 0;
}