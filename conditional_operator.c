#include<stdio.h>
void main ()
{
    int a,b,c=0;
    printf("Enter 1st no.");
    scanf("%d",&a);
    printf("Enter 2st no.");
    scanf("%d",&b);
    c=(a>b)?a:b;
    printf("Greater value is %d",c);
}