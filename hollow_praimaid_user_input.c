#include <stdio.h>
void main()
{
    int i,j,n,k=0;
    
    printf("Enter Only odd no.=");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {  
        i<=(n/2)+1?k++:k--;
        for(j=1; j<=k; j++)
        {
            if(j==1||j==k||j==k)
            {
                printf("  *");
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }
}  