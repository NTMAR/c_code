/* program For taking elements from
   user and print it */
#include<stdio.h>
main()
{
    int arr[5],sum,i;
    printf("Enter 5 elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
       sum=sum+arr[i];
    }
    printf("total=%d",sum);
}