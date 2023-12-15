// add 2 complex no.by passing struct to a func
#include<stdio.h>
struct complex
{
    float real;
    float img;
};
int main()
{
    struct complex a,b;
    printf("\nenter no.");
    scanf("%f %f",&a.real,&a.img);
    printf("\nenter no.");
    scanf("%f %f",&b.real,&b.img);
    printf("Sum of Complex Numbers is %f + (%f)i",(a.real+b.real),(a.img+b.img));
    return 0;
}