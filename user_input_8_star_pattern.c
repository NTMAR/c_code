#include <stdio.h>
int main()
{  
    while(1)
    {
    int i,j,n;
    printf("Enter ont odd no.=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n/2)+1; j++)
        {
            if((i==1&&j>1&&j<(n/2)+1))
            {
                printf("*");
            }
            else if(j==1&&i>1&&i<(n/2)+1)
            {
                printf("*");
            }
            else if(j==(n/2)+1&&i>1&&i<(n/2)+1)
            {
                printf("*");
            }
            else if(i==(n/2)+1&&j>1&&j<(n/2)+1)
            {
            printf("*");
            }
            else if(j==1&&i>(n/2)+1&&i<n)
            {
            printf("*");
            }
            else if(j==(n/2)+1&&i>(n/2)+1&&i<n)
            {
            printf("*");
            }
            else if(i==n&&j>1&&j<(n/2)+1)
            {
            printf("*");
            }
            else
            {
            printf("m");
            }
        }
        printf("\n");
    }
  }
}