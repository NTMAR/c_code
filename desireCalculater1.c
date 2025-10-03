#include <stdio.h>
int main()
{
    printf("\n1.Addition");
    printf("\n2.subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter your choice=");
    int a,b;
    int c,d,e;
    int f,g,h,i;
    int j,k,l,m,n;
    int ab,cd,aa,bb,dd,cc;
    int match;
    int choice;
    scanf("%d",&choice);
    if(choice>0&&choice<5)
    {
        if(choice==1)
        {
            printf("How number you add:\n");
            printf("1.Two number\n");
            printf("2.three number\n");
            printf("3.Four number\n");
            printf("4.Five number\n");
            printf("Enter number=");
            scanf("%d",&match);
            switch(match)
            {
            case 1:
                printf("Enter 1st number");
                scanf("%d",&a);
                printf("Enter 2nd number");
                scanf("%d",&b);
                printf("Results=%d",a+b);
                break;
            case 2:
                printf("Enter 1st number");
                scanf("%d",&c);
                printf("Enter 2nd number");
                scanf("%d",&d);
                printf("Enter 3rd number");
                scanf("%d",&e);
                printf("Results=%d",c+d+e);
                break;
            case 3:
                printf("Enter 1st number");
                scanf("%d",&f);
                printf("Enter 2nd number");
                scanf("%d",&g);
                printf("Enter 3rd number");
                scanf("%d",&h);
                printf("Enter 4th number");
                scanf("%d",&i);
                printf("Results=%d",f+g+h+i);
                break;
            case 4:
                printf("Enter 1st number");
                scanf("%d",&j);
                printf("Enter 2nd number");
                scanf("%d",&k);
                printf("Enter 3rd number");
                scanf("%d",&l);
                printf("Enter 4th number");
                scanf("%d",&m);
                printf("Enter 5th number");
                scanf("%d",&n);
                printf("Results=%d",j+k+l+m+n);
                break;
            default:
                printf("Enter Vailed no.");
                break;
            }
        }
        if(choice==2)
        {
            printf("Enter 1st number");
            scanf("%d",&ab);
            printf("Enter 2nd number");
            scanf("%d",&cd);
            printf("Result=%d",ab-cd);
        }
        if(choice==3)
        {
            printf("Enter 1st number");
            scanf("%d",&bb);
            printf("Enter 2nd number");
            scanf("%d",&aa);
            printf("Result=%d",bb*aa);
        }
        if(choice==4)
        {
            printf("Enter 1st number");
            scanf("%d",&cc);
            printf("Enter 2nd number");
            scanf("%d",&dd);
            if(dd>cc)
            {
                printf("Result=%d",dd/cc);
            }
            else
            {
                printf("Results=%d",cc/dd);
            }
        }
    }
  return 0;
}