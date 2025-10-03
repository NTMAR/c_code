#include <stdio.h>
void main()
{
    int i,j,m,n,q,k,x,y;
    printf("Enter a no.");
    scanf("%d",&q);
    int p=q;
    for(y=1;y<=2*q+1;y++)
        {
          printf("*");
        }
     printf("\n");
    for(i=1; i<=q; i++)
    {
        for(j=1; j<=p; j++)
        {
            printf("*");
        }
        p--;
        for(m=1;m<=i+k;m++)
           {
            printf(" ");
           }
        k++;
        for(n=q;n>=i;n--)
           {
            printf("*");
           }
        printf("\n");
    }

    for(m=1; m<=q; m++)
    {
        p++;
        for(n=-0; n<=p; n++)
        {
            printf("*");
        }
        printf("\n");
    }

}
    