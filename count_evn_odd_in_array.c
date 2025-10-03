#include<stdio.h>
main()
{
    int i,j,n;
    int odd=0,even=0;
    int arr[n];
    printf("Enter size of array:");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {   
        printf("Enter %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    for(j=0; j<n; j++)
    {
        if((arr[j]%2)==0)
        {
            even=even + 1;
        }
        else
        {
            odd=odd + 1;
        }
    }
    printf("Even no. in array=%d\n",even);
    printf("odd no. in array=%d",odd);
}