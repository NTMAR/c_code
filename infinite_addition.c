#include <stdio.h>
 void main()
{
printf("+");
printf("\nEnter your choice=");
int a,b;
int c,d;
char choice;
scanf("%c",&choice);
switch(choice)
      {
       case '+':
       printf("Enter 1st number");
       scanf("%d",&a);
       printf("Enter 2nd number");
       scanf("%d",&b);
       printf("Results=%d",a+b);
       break;
       default:
       printf(" enter Vailed no.");
       break;
    }
}


    