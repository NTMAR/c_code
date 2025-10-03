
#include<stdio.h>
main()
{
    int i,j,a,n;
    int arr[50];
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(j=0;j<n;j++)
    {
     scanf("%d",&arr[j]);
    }
    a=arr[1];
    for(i=0; i<n; i++)
    {
     if(arr[i]>a)
       {
          a=arr[i];
       } 
        
    }
  printf("maximum=%d",a);
}