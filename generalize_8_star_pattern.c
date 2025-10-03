#include <stdio.h>
int main()
{
    int i,j,n;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=5; j++)
        {
            if((i==1&&j>1&&j<5))
            {
                printf("*");
            }
            else if((j==1&&i>1&&i<5))
            {
                printf("*");
            }
            else if(j==5&&i>1&&i<5)
            {
                printf("*");
            }
            else if((i==5&&j>1&&j<5))
            {
            printf("*");
            }
            else if((j==1&&i>5&&i<9))
            {
            printf("*");
            }
            else if(j==5&&i>5&&i<9)
            {
            printf("*");
            }
            else if(i==9&&j>1&&j<5)
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