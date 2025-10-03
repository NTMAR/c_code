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
    printf("Elements are:");
    for(i=0; i<5; i++)
    {
        printf("%d,",arr[i]);
    }
}