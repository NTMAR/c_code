#include<stdio.h>
void main ()
{
    int a[10],i,j,k;
    printf("Enter an array : ");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (j=0; j<10; j++)
    {
        for (k=j; k<10; k++)
        {
            if (a[j]>a[k])
            {
                a[j]=a[j]+a[k];
                a[k]=a[j]-a[k];
                a[j]=a[j]-a[k];
            }
        }
        printf("%d\n",a[j]);
    }
}