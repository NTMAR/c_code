#include<stdio.h>
main()
{
    int arr[10],i,n;
    printf("Enter 10 elements:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements to search:\n");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(n==arr[i])
        {
     printf("%d at %d position",n,i+1);
        }   
        
     }
}