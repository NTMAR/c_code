#include<stdio.h>
void name(int);
void main()
{
    int x=1;
    name(x);

}
void name(int y)
{

    if(y<=10)
    {
        printf("%d_Nitish\n",y);
        name(y+1);
    }
}