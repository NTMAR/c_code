#include <stdio.h>
int main()
{
    int i;
    int j;
    int u=1;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=11; j++)
        {
            printf("%dx%d=%d",j,i,j*i);
            printf("\t");
        }

        printf("\n");

    }
return 0;
}