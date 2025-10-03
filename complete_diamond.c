#include <stdio.h>
 void main() 
{ 
int m;
int n;
int k;
int i;
int j;
int p;
for(m=1;m<=5;m++)
 {
  for(n=5;n>=m;n--)
     { 
    printf("#");
     }
    for(k=1;k<=2*m-1;k++)
     {
        printf("*");
     }
     printf("\n");
  }
    for(i=1;i<=5;i++)
       {
        for(j=1;j<=i;j++)
             {
            printf("#");
             }
             for(p=9;p>=2*i-1;p--)
             {
            printf("*");
             }
       printf("\n");
      }
        
}