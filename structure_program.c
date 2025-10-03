#include <stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[10];
        int admission_no;
    };
    struct student student_1= {4,"Nitish",2577};
    printf("Details of student_1:\n");
    printf("Roll no:%d\n",student_1.roll);
    printf("Name:%s\n",student_1.name);
    printf("Adm no:%d\n",student_1.admission_no);
    struct student stu_2;
    printf("Enter Detail:\n");
    printf("Enter name:\n");
    scanf("%s",&stu_2.name);
    printf("Enter roll no:\n");
    scanf("%d",&stu_2.roll);
    printf("Enter admission no:\n");
    scanf("%d",&stu_2.admission_no);
    printf("Details you enter is:\n");
    printf("Name:%s\n",stu_2.name);
    printf("Roll no:%d\n",stu_2.roll);
    printf("Admission no:%d\n",stu_2.admission_no);

    return 0;
}