#include <stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=21; i++)
    {

        for(j=1; j<=11; j++)
        {   
            
            if(j==(12-i)||j==(i-10)||j==11)
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






