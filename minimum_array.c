#include<stdio.h>
void main()
{
    int a[3],i,min;
    printf("Enter 3 values:-\n");
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1; i<3; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Minimum value is:- %d",min);
}


