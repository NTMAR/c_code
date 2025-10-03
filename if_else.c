#include <stdio.h>
 void main() 
{ 
int m;
int n;
for(m=1;m<=5;m++)
   {  for(n=5;n>=1;n--)
       { if(n>m)
          printf(" ");
           else
        printf("*");  
       }
        printf("\n");
    }
 }