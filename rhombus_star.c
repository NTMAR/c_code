#include <stdio.h>
 void main()
{
 int n;
 scanf("%d",&n);

int i,j,k; 
 
   for( i=1;i<=n;i++)
     {
      for(j=1;j<=n-i;j++)
        {
       printf(" ");
        }
       for(k=1;k<=n;k++)
        {
         printf("*");
        }
       
    printf("\n");
     }
 }
     