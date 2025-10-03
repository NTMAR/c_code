#include<stdio.h>  
int add();
int main()
{
add();
return 0;
}
int add()
{
int a,b,c;
printf("enter no.");
scanf("%d %d",&a,&b);
c=a+b;
printf("%d",c);
return c;
}
