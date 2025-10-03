
  /*Write a program in C to find 
  a pair with given sum in the array.*/

#include<stdio.h>
#include<string.h>
void main ()
{
    int arr[6];
    int i,j,n=15;

    printf("Enter 10 elements:\n");
    for(i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++)
        {
            if((arr[i])+(arr[j])==n)
            {
    printf("%d & %d index is %d\n",i,j,n);
            }
        }
    }
}
