#include <stdio.h>
 void main()
{
printf("Enter rows number");
int  m,n;
int i,j,k;
scanf("%d",&n);   
 m=n;
   for( i=1;i<=n;i++)
     {
      for(j=1;j<=m-1;j++)
        {
       printf(" ");
        }
      for(k=1;k<=2*i-1;k++)
        {
        printf("*");
        }
       m--;
    printf("\n");
     }
 }
     