
#include<stdio.h>
main()
{
    int first[10]= {1,2,3,4,5,6,7,8,9,10};
    int second[10]= {11,12,13,14,15,16,17,18,19,20};
    int mgr[20],k=0;
    int i,j;
    for(i=0; i<20; i++)
    {
      
        mgr[i]=first[i];
        if(i>9)
         {
          mgr[i]=second[k];
          k++;
        }
    }
    
    for(j=0; j<20; j++)
    {
        printf("Elements are:%d\n",mgr[j]);
    }
}