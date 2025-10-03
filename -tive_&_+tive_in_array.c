/* program For taking elements from
   user and print it */
#include<stdio.h>
main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]<0)
        {
            printf("Negative elements are:%d\n",arr[i]);
        }
        else
        {
            printf("positive elements are:%d\n",arr[i]);
        }
    }
}