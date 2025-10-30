#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    int rows = 21, cols = 21;   // square grid
    int r = 9;                  // radius
    int cx = rows / 2, cy = cols / 2;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            int dx = i - cx;
            int dy = j - cy;

            if (abs(dx*dx + dy*dy - r*r) < r) 
                printf("0 ");
            else
                printf("  ");   // double space
        }
        printf("\n");
    }

    return 0;
}
