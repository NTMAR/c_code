#include <stdio.h>
int main()
{
    int i,j,n;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1&&(j==2||j==3||j==4))
            {
                printf("*");
            }
            else if(i==2&&(j==1||j==5))
            {
                printf("*");
            }
            else if(i==3&&(j==1||j==5))
            {
            printf("*");
            }
            else if(i==4&&(j==1||j==5))
            {
            printf("*");
            }
            else if(i==5&&(j==2||j==3||j==4))
            {
            printf("*");
            }
            else if(i==6&&(j==1||j==5))
            {
            printf("*");
            }
            else if(i==7&&(j==1||j==5))
            {
            printf("*");
            }
            else if(i==8&&(j==1||j==5))
            {
            printf("*");
            }
            else if(i==9&&(j==2||j==3||j==4))
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