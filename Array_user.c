#include <stdio.h>
void main()
{
    int size,i;
    printf("Enter size of Array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in Array \n");
    for(i=0; i<size; i++)
    {
        
        scanf("%d",&arr[i]);
    }
    printf("printing stored Array \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }
}




    