#include <stdio.h>
void main()
{
  int n,re,sum=0;
  printf("enter a number=");
  scanf("%d",&n);
  while(n>0)
  {
    re=n%10;
    sum=sum+re;
    n=n/10;
  }
printf("sum of digits=%d",sum);
}








    