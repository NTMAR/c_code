/* negative elements in array
    */
#include<stdio.h>
#include<conio.h>
main()
{ 
    clrscr();
    int count=0;
    int arr[10];
    int i;
    printf("Enter 10 elements:");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]<0)
        {
            count=count+1;
        }
   printf("-ve elements in array:%d",count);
  getch();
}