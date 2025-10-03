#include <stdio.h>
int main()
{  
   while(1)
   {
    int i,j,n;
    printf("Enter only odd no.=");
    scanf("%d",&n);
    int k=n;
    for(i=1; i<=(n/2)+1; i++)
    {

        for(j=1; j<=k; j++)
        {   
            
            if(j==k||i==1|i==j)
            {
                printf("*");
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
}






    