#include <stdio.h>
 void main()
{
int i;
int j;
int u=1;
for(i=1;i<=20;i++)
   {
     for(j=1;j<=10;j++)
        {
       printf("%d x %d = %d",u,j,u*j);
         printf("\n");
         }
    printf("\n");
    u++;
    
    }
    
}