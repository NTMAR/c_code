#include <stdio.h>
 void main() 
{ 
int m;
int k=12;
int n;
for(m=1;m<=k;m++)
 {
  for(n=k;n>=m;n--)
     { printf(" ");}
    for(int k=1;k<=m;k++)
    { printf(" *");}
  printf("\n");
    }
    }