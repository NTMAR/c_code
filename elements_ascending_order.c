#include <stdio.h>
void main()
{
    int number[3]={87,46,82};
    int i, j, a;
    for (i = 0; i < 3; ++i)//0,1,2
    {
        for (j = i + 1; j < 3 ; ++j)//1,2
        {
            if (number[i] > number[j])
            {
                a = number[i];
               number[i]=number[j];
                number[j] = a;
            }
        }
    }
    printf("ascending order\n");

    for (i = 0; i < 3; ++i)
    {
        printf("%d\n", number[i]);
    }
}