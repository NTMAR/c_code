/*program For inserting elements 
     in array */

#include<stdio.h>
main()
{
    int ele=100,i;
    int loc=2;
    int arr[6]= {10,20,30,40,50,60};
    printf("=========================\n");
    printf("Before inserting elements:\n");
    printf("=========================\n");
    for(i=0; i<6; i++)
    {
        printf("Elements are:%d\n",arr[i]);
    }
    for(i=6-1; i>=loc; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=ele;
    printf("========================\n");
    printf("After inserting elements:\n");
    printf("========================\n");
    for(i=0; i<7; i++)
    {
        printf("Elements are:%d\n",arr[i]);
    }
}