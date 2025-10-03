#include<stdio.h>
#include<conio.h>
void main()
{
    int m[3][4],i,j,p,q;
    printf("Enter no:\n");
    for(i=0; i<3; i++)
    {
        for( j=0; j<4; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
  printf("stored elements are:\n");
   for( p=0; p<3; p++)
    {
        for( q=0; q<4; q++)
        {
            printf("%d",m[p][q]);
            printf("\t");
        }
        printf("\n");
    }
  }