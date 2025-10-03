#include <stdio.h>
void main()
{
    int i,j,n,k,p,q=0;
    printf("Enter no.=");
    scanf("%d",&n);
    k=n;
    p=n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+q; j++)
        {
            if(j==k||j==p||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        p--;
        k++;
        q++;
        printf("\n");
    }   
}