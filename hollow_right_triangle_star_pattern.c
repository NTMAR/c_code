#include <stdio.h>
 void main() 
{ 

int i;

for(int rows=1;rows<=10;rows++)
 {
   for(int colm=1;colm<=10;colm++)
       {
      if(rows==colm||colm==1||rows==10)
         printf("* ");
        else
        
          printf("  ");
      
          }
     printf("\n");
  }
}