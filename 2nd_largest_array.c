#include <stdio.h>

void main() {
    int arr1[10],n,i,j=0,lrg,lrg2nd;

    printf("\n\nFind the second largest element in an array :\n");
    printf("-------------------------------------------------\n");

 
    /* Stored values into the array*/
    printf("Input %d elements in the array :\n",n);
    for(i=0; i<10; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    /* find location of the largest element in the array */
//   lrg=arr1[0];
    lrg=0;
    for(i=0; i<10; i++)
    {
        if(lrg<arr1[i])
        {
            lrg=arr1[i];
            j = i;
        }
    }

    /* ignore the largest element and find the 2nd largest element in the array */
    lrg2nd=0;
    for(i=0; i<10; i++)
    {
        if(i==j)
        {
            i++;  /* ignoring the largest element */
            i--;
        }
        else
        {
            if(lrg2nd<arr1[i])
            {
                lrg2nd=arr1[i];
            }
        }
    }

    printf("The 2nd largest no. %d \n\n",lrg2nd);
    printf("The 1st largest no.%d",lrg);
}