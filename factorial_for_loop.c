#include<stdio.h>
void main()
{
   while(1)
{
    int n,i,c=1;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c*=i;
    }
  printf("factorial of %d is %d\n",n,c);
}
}

    