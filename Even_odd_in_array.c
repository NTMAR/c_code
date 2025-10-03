#include<stdio.h>
main()
{
    int arr[10],odd[5],even[5];
    int i,j,a=0,b=0;
    printf("Enter 10 elements in array:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if((arr[i]%2)==0)
        {
            even[a]=arr[i];
            a++;
        }
        else 
        {
            odd[b]=arr[i];
            b++;
        }
    }
    printf("Even number in array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n",even[i]);
    }
    printf("odd number in array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n",odd[i]);
    }
}

