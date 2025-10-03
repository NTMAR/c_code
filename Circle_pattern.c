#include <stdio.h>
int main()
{
    int i,j,n;
    int k=5;
    for(i=1; i<=15; i++)
    {
        for(j=1; j<=16; j++)
        {
            if((i==1&&j>5&&j<12))
            {
                printf("0");
            }
            else if(j==k)
            {
            printf("0");
            }
            else if(j==1&&i>5&&i<12)
            {
            printf("0");
            }
            else
            {
            printf(" ");
            }
           
        }
        k--;
        printf("\n");
    }
}