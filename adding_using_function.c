#include<stdio.h>
int add(int,int);
void main(){
int m,n;
printf("enter 1st number:");
scanf("%d",&m);
printf("enter 2nd number:");
scanf("%d",&n);
printf("Added value:%d",add(m,n));
}
int add(int x,int y )
{
  
 return x+y;
}