#include <stdio.h>
void main()
{
     int size,i,j;
     printf("Enter size of Array\n");
     scanf("%d",&size);
     int arr[size];
     for(i=1;i<=size;i++)
        {
         printf("Enter elements in array");
         scanf("%d",&arr[i]);
        }
     printf("printing stored Array");
          for(j=1;j<=size;j++)
            {
             
             printf("%d\n",arr[j]);
            }
}
     
        
     
    
    