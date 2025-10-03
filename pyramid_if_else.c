#include <stdio.h>
 void main()
{
printf("Enter rows number");
int g;

scanf("%d",&g);
int rows;

int k=g+5;
int colm;


   for(rows =1;rows<=g;rows++)
     { 
      
      for(colm=1;colm<=k;colm++)
          if(colm>=7-rows&&colm<=5+rows)
        printf("*"); 
        else
        printf("o");
        printf("\n");
       
     }
        
 }
     