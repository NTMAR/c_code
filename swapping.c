#include <stdio.h>
void main()
{
    int a=10,b=20;
    printf("a=10 b=20");
    a=a+b;//a=10+20
    b=a-b;//b=30-20
    a=a-b;//a=30-10
    printf("\nAfter swapping value:\n");
    printf("a=%d b=%d",a,b);
}