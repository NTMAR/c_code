#include<stdio.h>
void main()
{
   while(1){
    long int n,i,c=0;
    printf("\nEnter no.");
    scanf("%ld",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }

    }
    if(c==2)
    {
        printf("prime");
    }
    else
    {
        printf("Composite");
    }
   }
}