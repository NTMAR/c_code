#include <stdio.h>
 void main() 
{ 
int m;

scanf("%d",&m);

if(m % 11==0 && m % 5 ==0)
{
printf("this is divisible by 5 and 11");
}
 else
{
printf(" this is not divisible by 5 and 11");
}

}