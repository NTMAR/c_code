#include <stdio.h>
 void main()
{
 int n;
 scanf("%d",&n);

int i,j,k; 
 
   for( i=1;i<=n;i++)
     {
      for(j=1;j<i;j++)
        {
       printf(" ");
        }
       for(k=1;k<=n;k++)
        {
         if(i==1||i==n||k==1||k==n)
         printf("*");
        else
        printf(" ");
        }
       
    printf("\n");
     }
 }
     