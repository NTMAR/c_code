
#include<stdio.h>
main()
{
    int i,a;
    int arr[5]={10,40,8,1,21};
    a=arr[0];
    for(i=1; i<5; i++)
    {
     if(a<arr[i])
       {
          a=arr[i];
       } 
        
    }
  printf("maximum=%d",a);
}