#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=10)
    {
        j=1;
        while(j<=12)
        {
            printf("%d\t",i*j);
            j++;
        }
        printf("\n");
        i++;

    }
}

    