#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter only odd no.=");
    scanf("%d",&n);
    for(i=1; i<=(n/2)+1; i++)
    {

        for(j=1; j<=n; j++)
        {

            if(i==1||i==j||j==(n+1)-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

}






