#include <stdio.h>
void main()
{
    int i,j,n,c=0;
    int a[100];
    int b[100];
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements in array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    a[j]=-1;
                }
            }
            b[i]=c;
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=-1)
        {
            printf("No of%d is%d \n",a[i],b[i]);
        }
    }
}
