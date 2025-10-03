
#include <stdio.h>
int nadd(int,int);
int main()
{  
  int lower,upper,sum=0;
  int i,j,n;
  printf("Enter lower limit"); 
  scanf("%d",&lower);
  printf("Enter upper limit");
  scanf("%d",&upper);
  sum=nadd(lower,upper);
  printf("%d",sum);
 return 0;
}
int nadd(int x,int y)
{
  if(x>y)
   return x;
  else
  return x+nadd(x+1,y);
  
}