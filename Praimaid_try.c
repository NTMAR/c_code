#include <stdio.h>
void main()
{
    int i,j,m,n,q,u,k=1;
    printf("Enter a no.=");
    scanf("%d",&q);
    int p=q;
    for(i=0; i<=q; i++)
    {
        for(j=1; j<=p; j++)
        {
            printf(" ");
        }
        p--;
        for(u=1;u<=i+k;u++)
           {
            printf("*");
           }
        k++;
        printf("\n");
    }
}
  //  for(m=1; m<=q; m++)
   // {
    //    p++;
     //   for(n=1; n<=p; n++)
     //   {
          //  printf("*");
      //  }
     //   printf("\n");
   // }


