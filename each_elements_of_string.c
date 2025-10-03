#include<stdio.h>
void main ()
{
    char name [100];
    int i=0;
    printf("Entered your name=");
    scanf("%s",name);
    while(name[i]!='\0')
    {
printf("%c is stored at %u\n",name[i],&name[i]);
     i++;
    }
 }
    