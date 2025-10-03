#include<stdio.h>
#include<string.h>
void main ()
{
    char name [100]="Sai_Nath_University_Ormajhi_Ranchi";
    int l;
    l=strlen(name);
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
}
