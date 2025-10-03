#include <stdio.h>
void compare();
void main()
{
compare();
}
void compare()
{
int a,b;
printf("enter two number=");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("%d is greater",a);
}
else if(a==b)
{
printf("Both numbers are equal",b);
}
else
{
printf("%d is greater",b);
}

}









    