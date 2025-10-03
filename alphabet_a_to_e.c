#include <stdio.h>
 void main() 
{ 
int m;
int n;
char ch='a';
for(m=1;m<=5;m++)
 {
       for(n=1;n<=m;n++)
         { printf("%c",ch);ch++;}
         
          printf("\n");
          ch='a';
  }
    }