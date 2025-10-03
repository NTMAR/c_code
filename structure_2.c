#include <stdio.h>

    struct student
    {
        int roll;
        char name[10];
        int id_no;
    } stu_1,stu_2,stu_3;
    void main()
    {
    printf("Enter 1st student details:\n");

        printf("Enter your name:\n");
        scanf("%s",&stu_1.name);

        printf("Enter your roll no:\n");
        scanf("%d",&stu_1.roll);

        printf("Enter your id no:\n");
        scanf("%d",&stu_1.id_no);


    printf("Enter 2st student details:\n");

        printf("Enter your name:\n");
        scanf("%s",&stu_2.name);

        printf("Enter your roll no:\n");
        scanf("%d",&stu_2.roll);

        printf("Enter your id no:\n");
        scanf("%d",&stu_2.id_no);

     printf("Enter 3st student details\n");

        printf("Enter your name:\n");
        scanf("%s",&stu_3.name);

        printf("Enter your roll no:\n");
        scanf("%d",&stu_3.roll);

        printf("Enter your id no:\n");
        scanf("%d",&stu_3.id_no);
        
        

    }