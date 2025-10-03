#include<stdio.h>
void main()
{
    int i,j,p;
    int m,n;
    int k,q;
    int u,v;
    int x,y;
    printf("Enter no.");
    scanf("%d",&p);
    for(y=1; y<=2*(p+1); y++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1; i<=p; ++i)
    {

        for(j=p; j>=i; j--)
        {
            printf("*");
        }
        for(m=1; m<=i; m++)
        {
            printf(" ");
        }
        for(n=1; n<=i; n++)
        {
            printf(" ");
        }
        for(k=p; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(q=1; q<=p; q++)
    {
        for(u=1; u<=q; u++)
        {
            printf("*");
        }
        for(v=p; v>=q; v--)
        {
            printf(" ");
        }
        for(x=p; x>=q; x--)
        {
            printf(" ");
        }
        for(y=1; y<=q; y++)
        {
            printf("*");
        }
        printf("\n");

    }
    for(y=1; y<=2*(p+1); y++)
    {
        printf("*");
    }

}